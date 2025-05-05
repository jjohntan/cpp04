/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 19:03:08 by jetan             #+#    #+#             */
/*   Updated: 2025/05/05 16:32:13 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <string>
#include <iostream>

//base class
class AAnimal
{
	protected:
		std::string type;
	public:
		AAnimal();//Default constructor
		AAnimal(const AAnimal &other);//Copy constructor
		AAnimal &operator=(const AAnimal &other);//Copy assignment operator
		virtual ~AAnimal();//Destructor
		virtual void makeSound() const = 0;//pure virtual function
		std::string getType() const;
};

#endif