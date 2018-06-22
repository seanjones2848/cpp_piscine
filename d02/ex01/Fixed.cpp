/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 13:17:49 by sjones            #+#    #+#             */
/*   Updated: 2018/01/09 13:45:24 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(Fixed const& obj) {
	std::cout << "Copy constructor called" << std::endl;
	*this = obj; };

Fixed::~Fixed() {std::cout << "Destuctor called" << std::endl; };

int			Fixed::getRawBits( void ) const {
	return this->_imprecise; };

void		Fixed::setRawBits( int const raw) {
this->_imprecise = raw; };

float		Fixed::tofloat( void ) const {
return this->_imprecise /256.0; };

int			Fixed::toInt(void) const {
return this->_imprecise /256; };

Fixed::Fixed() : _imprecise(0) {
	std::cout << "Default constuctor called" << std::endl; };

Fixed::Fixed(const float f) {
	std::cout << "Float constuctor called" << std::endl;
	this->_imprecise = roundf(f * 256.0); };

Fixed::Fixed(const int i) {
	std::cout << "Int constuctor called" << std::endl;
	this->_imprecise = i * 256; };

Fixed&		Fixed::operator=(Fixed const &other) {
	std::cout << "Assignation operator called" << std::endl;
	this->_imprecise = other.getRawBits();
	return *this;
}

std::ostream&	operator<<(std::ostream& o, Fixed const& nom) {
	o << nom.tofloat();
	return o; };

const int Fixed::_bits = 8;
