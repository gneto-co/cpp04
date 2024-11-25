/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gneto-co <gneto-co@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 00:39:35 by gneto-co          #+#    #+#             */
/*   Updated: 2024/11/25 11:03:27 by gneto-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal()
{
	this->_type = "";

	FT_MSG("Animal() Constructor")
	return;
}

Animal::Animal(STRING type)
{
	this->_type = type;

	FT_MSG("Animal(String) Constructor")
	return;
}

Animal::Animal(const Animal &copy)
{
	*this = copy;

	FT_MSG("Animal(Animal copy) Constructor")
	return;
}

Animal::~Animal()
{
	FT_MSG("~Animal Destructor")
	return;
}

Animal &Animal::operator=(const Animal &src)
{
	if (this != &src)
	{
		this->_type = src._type;
	}

	return *this;
}

/* --- --- --- */

void Animal::printType(void) const
{
	PRINT << CYAN BOLT << this->_type << RESEND;

	return;
}

STRING Animal::getType(void) const
{
	return this->_type;
}

void Animal::makeSound(void) const
{
	PRINT << BRIGHT_GREEN BOLT "raaawwwrr!" << RESEND;

	return;
}
