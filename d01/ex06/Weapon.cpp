/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 23:36:21 by sjones            #+#    #+#             */
/*   Updated: 2018/01/09 12:38:55 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string&	Weapon::getType() { return this->_type; };
void			Weapon::setType(std::string str) { this->_type = str; };
Weapon::Weapon(std::string type) { this->_type = type; };
