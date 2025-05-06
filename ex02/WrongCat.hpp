/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 14:10:33 by jetan             #+#    #+#             */
/*   Updated: 2025/04/28 14:31:06 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGWrongCat_HPP
# define WRONGWrongCat_HPP

#include "WrongAnimal.hpp"

//derived class
class WrongCat: public WrongAnimal
{
	public:
		WrongCat();//Default constructor
		WrongCat(const WrongCat &other);//Copy constructor
		WrongCat &operator=(const WrongCat &other);//Copy assignment operator
		~WrongCat();//Destructor
		void makeSound() const;
};


#endif