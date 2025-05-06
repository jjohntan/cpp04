/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 16:55:17 by jetan             #+#    #+#             */
/*   Updated: 2025/05/06 19:12:00 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
	std::cout << "Dog Default constructor called" << std::endl;
	
	type = "Dog";
	brain = new Brain();
}

Dog::Dog(const Dog &other): Animal(other), brain(NULL)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	
	*this = other;
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Dog Copy assignment operator called" << std::endl;
	
	if (this != &other)
	{
		this->type = other.type;
		delete brain;//clean old memory
		brain = new Brain(*other.brain);//allocate new memory and copy
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
	
	delete brain;
}

void Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}

void Dog::setBrain(int index, std::string _idea)
{
	if (index >= 0 && index < 100)
		brain->setIdea(index, _idea);
}

std::string Dog::getBrain(int index)
{
	if (index >= 0 && index < 100)
		return brain->getIdea(index);
	return ("");
}
