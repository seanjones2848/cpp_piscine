/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 15:04:27 by sjones            #+#    #+#             */
/*   Updated: 2018/01/09 11:04:41 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void			Zombie::setZombie(std::string str1, std::string str2) {
	this->_name = str1;
	this->_type = str2; };

std::string		Zombie::getName() { return this->_name; };
std::string		Zombie::getType() { return this->_type; };

Zombie::Zombie() { this->_name = "Bill"; this->_type = "Normal"; };

Zombie::Zombie(std::string str1, std::string str2) {
	this->_name = str1;
	this->_type = str2; };

Zombie::~Zombie() {
	std::cout << _name << " is returning to the earth now..."<< std::endl; };

void			Zombie::announce() {
	std::cout << "<" << this->_name << " (" << this->_type << ")> Braiiiiiiinnnssss..." << std::endl; };
