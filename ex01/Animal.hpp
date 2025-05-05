/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 19:03:08 by jetan             #+#    #+#             */
/*   Updated: 2025/05/05 15:06:17 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

//base class
class Animal
{
	protected:
		std::string type;
	public:
		Animal();//Default constructor
		Animal(const Animal &other);//Copy constructor
		Animal &operator=(const Animal &other);//Copy assignment operator
		virtual ~Animal();//Destructor
		virtual void makeSound() const;
		std::string getType() const;
};

#endif