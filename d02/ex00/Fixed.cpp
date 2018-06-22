/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 13:17:49 by sjones            #+#    #+#             */
/*   Updated: 2018/01/09 13:25:10 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(Fixed const& obj) {
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
};

Fixed::~Fixed() {std::cout << "Destuctor called" << std::endl; };

int			Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_imprecise; };

void		Fixed::setRawBits( int const raw) {
this->_imprecise = raw; };

Fixed::Fixed() : _imprecise(0) {
	std::cout << "Default constuctor called" << std::endl; };

Fixed&		Fixed::operator=(Fixed const &other) {
	std::cout << "Assignation operator called" << std::endl;
	this->_imprecise = other.getRawBits();
	return *this;
}

const int Fixed::_bits = 8;
