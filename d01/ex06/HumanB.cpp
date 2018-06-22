/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 00:12:08 by sjones            #+#    #+#             */
/*   Updated: 2018/01/09 11:37:05 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::setWeapon(Weapon &weapon) { this->_weapon = &weapon; };
void	HumanB::setType(std::string type) { this->_weapon->setType(type); };

HumanB::HumanB(std::string name) {
	this->_name = name; 
	this->_weapon = new Weapon("heap weapon"); };

void	HumanB::attack() {
	std::cout << this->_name << " attacks with a " << this->_weapon->getType() << std::endl; };
