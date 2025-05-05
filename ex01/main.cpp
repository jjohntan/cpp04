/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 19:01:36 by jetan             #+#    #+#             */
/*   Updated: 2025/05/05 15:23:07 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	delete j;//should not create a leak
	delete i;

	std::cout << "----------- deep copy -----------" << std::endl;
	Cat original;
	original.setBrain(0, "Fish!");
	
	Cat copy;
	
	copy = original;
	copy.setBrain(0, "Fish Fish!");
	
	std::cout << original.getBrain(0) << std::endl;
	std::cout << copy.getBrain(0) << std::endl;
	
	// Dog original;
	// original.setBrain(0, "Bone!");
	
	// Dog copy;
	
	// copy = original;
	// copy.setBrain(0, "Bone Bone!");
	
	// std::cout << original.getBrain(0) << std::endl;
	// std::cout << copy.getBrain(0) << std::endl;

	return 0;
}