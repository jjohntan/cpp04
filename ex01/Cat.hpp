/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 16:54:18 by jetan             #+#    #+#             */
/*   Updated: 2025/04/29 19:01:02 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

//derived class
class Cat: public Animal
{
	private:
		Brain* brain;
	public:
		Cat();//Default constructor
		Cat(const Cat &other);//Copy constructor
		Cat &operator=(const Cat &other);//Copy assignment operator
		~Cat();//Destructor
		void makeSound() const;
};

#endif