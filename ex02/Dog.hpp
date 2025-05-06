/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 16:54:18 by jetan             #+#    #+#             */
/*   Updated: 2025/05/06 17:31:41 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

//derived class
class Dog: public AAnimal
{
	private:
		Brain* brain;
	public:
		Dog();//Default constructor
		Dog(const Dog &other);//Copy constructor
		Dog &operator=(const Dog &other);//Copy assignment operator
		~Dog();//Destructor
		void makeSound() const;
		void setBrain(int index, std::string _idea);
		std::string getBrain(int index);

};

#endif