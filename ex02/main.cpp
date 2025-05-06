/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 19:01:36 by jetan             #+#    #+#             */
/*   Updated: 2025/05/06 18:05:22 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	
	delete j;//should not create a leak
	delete i;

	std::cout << "------------- array -------------" << std::endl;
	AAnimal* AAnimal[4] = {new Dog, new Dog, new Cat, new Cat};// an array of Animal objects
	
	for (int i = 0; i < 4; i++)
		AAnimal[i]->makeSound();
	
	for (int i = 0; i < 4; i++)//loop over and delete every animal
		delete AAnimal[i];
	
	std::cout << "--------------- cat ---------------" << std::endl;
	Cat originalCat;
	originalCat.setBrain(0, "Fish!");
	
	Cat copyCat;
	copyCat = originalCat;
	
	std::cout << "\nbefore" << std::endl;
	std::cout << originalCat.getBrain(0) << std::endl;
	std::cout << copyCat.getBrain(0) << std::endl;

	copyCat.setBrain(0, "Fish Fish!");
	
	std::cout << "\nafter" << std::endl;
	std::cout << originalCat.getBrain(0) << std::endl;
	std::cout << copyCat.getBrain(0) << std::endl;

	std::cout << "--------------- dog ---------------" << std::endl;
	Dog originalDog;
	originalDog.setBrain(0, "Bone!");
	
	Dog copyDog;
	copyDog = originalDog;
	
	std::cout << "\nbefore" << std::endl;
	std::cout << originalDog.getBrain(0) << std::endl;
	std::cout << copyDog.getBrain(0) << std::endl;
	
	copyDog.setBrain(0, "Bone Bone!");
	
	std::cout << "\nafter" << std::endl;
	std::cout << originalDog.getBrain(0) << std::endl;
	std::cout << copyDog.getBrain(0) << std::endl;
	std::cout << "------------------------------" << std::endl;
	
	// AAnimal *fox= new AAnimal;//create an object from abstract class
	
	// fox->makesound();
	
	// delete fox;
	std::cout << "------------------------------" << std::endl;

	
	return 0;
}