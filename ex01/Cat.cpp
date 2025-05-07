/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 18:01:06 by jetan             #+#    #+#             */
/*   Updated: 2025/05/07 21:20:25 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
	std::cout << "Cat Default constructor called" << std::endl;
	
	type = "Cat";
	brain = new Brain();
}

Cat::Cat(const Cat &other): Animal(other), brain(NULL)
{
	std::cout << "Cat Copy constructor called" << std::endl;

	*this = other;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat Copy assignment operator called" << std::endl;
	
	if (this != &other)
	{
		this->type = other.type;
		if (brain != NULL)
			delete brain;//clean old memory
		brain = new Brain(*other.brain);//allocate new memory and copy
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
	
	delete brain;
}

void Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}

void Cat::setBrain(int index, std::string _idea)
{
	if (index >= 0 && index < 100)
		brain->setIdea(index, _idea);
}

std::string Cat::getBrain(int index)
{
	if (index >= 0 && index < 100)
		return brain->getIdea(index);
	return ("");
}
