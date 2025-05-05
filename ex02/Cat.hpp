/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 16:54:18 by jetan             #+#    #+#             */
/*   Updated: 2025/05/05 16:36:26 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

//derived class
class Cat: public AAnimal
{
	private:
		Brain* brain;
	public:
		Cat();//Default constructor
		Cat(const Cat &other);//Copy constructor
		Cat &operator=(const Cat &other);//Copy assignment operator
		~Cat();//Destructor
		void makeSound() const;
		void setBrain(int index, std::string _idea);
		std::string getBrain(int index);
};

#endif