/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 16:54:18 by jetan             #+#    #+#             */
/*   Updated: 2025/04/29 19:02:03 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

//derived class
class Dog: public Animal
{
	private:
		Brain* brain;
	public:
		Dog();//Default constructor
		Dog(const Dog &other);//Copy constructor
		Dog &operator=(const Dog &other);//Copy assignment operator
		~Dog();//Destructor
		virtual void makeSound() const;
};

#endif