/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 13:14:09 by sjones            #+#    #+#             */
/*   Updated: 2018/01/11 13:44:14 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap() : FragTrap(), NinjaTrap() {
	std::cout << "SuperTrap online" << std::endl;
	_level = 1;
}

SuperTrap::SuperTrap(std::string name) : FragTrap(), NinjaTrap() {
	std::cout << "SuperTrap online" << std::endl;
	_name = name;
}

SuperTrap::~SuperTrap() {
	std::cout << "SuperTrap down" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const & other) {
	SuperTrap sup(other._name);
}

SuperTrap	&SuperTrap::operator=(SuperTrap const & other) {
	if (this == &other)
		return *this;
	this->_name = other._name;
	this->_hit = other._hit;
	this->_max_hit = other._max_hit;
	this->_enrg = other._enrg;
	this->_max_enrg = other._max_enrg;
	this->_melee = other._melee;
	this->_ranged = other._ranged;
	this->_dr = other._dr;
	this->_rand = other._rand;
	return *this;
}
