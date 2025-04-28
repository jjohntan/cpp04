/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 14:11:45 by jetan             #+#    #+#             */
/*   Updated: 2025/04/28 15:37:07 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();//Default constructor
		WrongAnimal(const WrongAnimal &other);//Copy constructor
		WrongAnimal &operator=(const WrongAnimal &other);//Copy assignment operator
		~WrongAnimal();//Destructor
		void makeSound() const;
		std::string getType() const;
};

#endif