/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 16:54:18 by jetan             #+#    #+#             */
/*   Updated: 2025/04/27 18:02:10 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_HPP
# define Cat_HPP

#include "Animal.hpp"

//derived class
class Cat: public Animal
{
	private:
		
	public:
		Cat();//Default constructor
		Cat(const Cat &other);//Copy constructor
		Cat &operator=(const Cat &other);//Copy assignment operator
		~Cat();//Destructor
		virtual void makeSound() const;
};

#endif