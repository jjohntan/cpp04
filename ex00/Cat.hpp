/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 16:54:18 by jetan             #+#    #+#             */
/*   Updated: 2025/05/06 19:26:42 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

//derived class
class Cat: public Animal
{
	public:
		Cat();//Default constructor
		Cat(const Cat &other);//Copy constructor
		Cat &operator=(const Cat &other);//Copy assignment operator
		~Cat();//Destructor
		void makeSound() const;
};

#endif