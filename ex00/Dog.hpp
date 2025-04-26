/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 16:54:18 by jetan             #+#    #+#             */
/*   Updated: 2025/04/26 17:00:00 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

//derived class
class Dog: public Animal
{
	private:
		
	public:
		Dog();
		Dog(std::string type_);
		Dog(const Dog &other);
		Dog &operator=(const Dog &other);
		~Dog();
		void makeSound();
};

#endif