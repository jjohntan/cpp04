/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 16:54:18 by jetan             #+#    #+#             */
/*   Updated: 2025/05/06 17:27:04 by jetan            ###   ########.fr       */
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
		Dog();//Default constructor
		Dog(const Dog &other);//Copy constructor
		Dog &operator=(const Dog &other);//Copy assignment operator
		~Dog();//Destructor
		void makeSound() const;
};

#endif