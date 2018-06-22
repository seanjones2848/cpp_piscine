/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 15:44:27 by sjones            #+#    #+#             */
/*   Updated: 2018/01/09 11:34:11 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Brain		Human::getBrain() { return this->_mind; };

Human::Human() {
	this->_mind = Brain();
	this->_name = "Bill"; };

Human::Human(std::string name) {
	this->_mind = Brain();
	this->_name = name; };

std::string		Human::identify() {
	return (this->_mind.identify());
};
