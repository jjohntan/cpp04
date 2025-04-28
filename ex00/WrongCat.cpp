/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 14:33:34 by jetan             #+#    #+#             */
/*   Updated: 2025/04/28 14:33:44 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
	std::cout << "WrongCat Default constructor called" << std::endl;
	
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &other): WrongAnimal(other)
{
	std::cout << "WrongCat Copy constructor called" << std::endl;
	
	*this = other;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	std::cout << "WrongCat Copy assignment operator called" << std::endl;
	
	if (this != &other)
		this->type = other.type;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}