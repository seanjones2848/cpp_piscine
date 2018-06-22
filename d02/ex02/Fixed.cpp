/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 13:17:49 by sjones            #+#    #+#             */
/*   Updated: 2018/01/11 14:53:25 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(Fixed const& obj) { *this = obj; };

Fixed::Fixed() : _imprecise(0) {};

Fixed::~Fixed() {};

int			Fixed::getRawBits( void ) const {
	return this->_imprecise; };

void		Fixed::setRawBits( int const raw) {
	_imprecise = raw; };

float		Fixed::toFloat( void ) const {
return this->_imprecise /256.0; };

int			Fixed::toInt(void) const {
return this->_imprecise /256; };

Fixed&		Fixed::operator=(Fixed const &other) {
	this->_imprecise = other.getRawBits();
	return *this; };

Fixed&		Fixed::operator--() {
this->_imprecise -= 1;
return *this; };

Fixed		Fixed::operator--(int nom) {
(void)nom;
Fixed dup(*this);
--(*this);
return dup; };

Fixed&		Fixed::operator++() {
this->_imprecise += 1;
return *this; };

Fixed		Fixed::operator++(int nom) {
(void)nom;
Fixed dup(*this);
++(*this);
return dup; };

Fixed		Fixed::operator+(Fixed const &nom) const {
Fixed ret;
ret._imprecise = this->_imprecise + nom.getRawBits();
return ret; };


Fixed		Fixed::operator-(Fixed const &nom) const {
Fixed ret;
ret._imprecise = this->_imprecise - nom.getRawBits();
return ret; };

Fixed		Fixed::operator*(Fixed const &nom) const {
Fixed ret;
ret._imprecise = (this->_imprecise * nom.getRawBits()) / 256;
return ret; };

Fixed		Fixed::operator/(Fixed const &nom) const {
Fixed ret;
ret._imprecise = (this->toFloat() / nom.toFloat()) * 256.0;
return ret; };

bool		Fixed::operator<(Fixed const &nom) {
if (this->_imprecise < nom.getRawBits())
	return true;
return false; };

bool		Fixed::operator>(Fixed const &nom) {
if (this->_imprecise > nom.getRawBits())
	return true;
return false; };

bool		Fixed::operator<=(Fixed const &nom) {
if (this->_imprecise <= nom.getRawBits())
	return true;
return false; };

bool		Fixed::operator>=(Fixed const &nom) {
if (this->_imprecise >= nom.getRawBits())
	return true;
return false; };

bool		Fixed::operator==(Fixed const &nom) {
if (getRawBits() == nom.getRawBits())
	return true;
return false; };

bool		Fixed::operator!=(Fixed const &nom) {
if (this->_imprecise != nom.getRawBits())
	return true;
return false; };

bool		Fixed::operator<(Fixed &nom) {
if (this->_imprecise < nom.getRawBits())
	return true;
return false; };

bool		Fixed::operator>(Fixed &nom) {
if (this->_imprecise > nom.getRawBits())
	return true;
return false; };

bool		Fixed::operator<=(Fixed &nom) {
if (this->_imprecise <= nom.getRawBits())
	return true;
return false; };

bool		Fixed::operator>=(Fixed &nom) {
if (this->_imprecise >= nom.getRawBits())
	return true;
return false; };

bool		Fixed::operator==(Fixed &nom) {
if (_imprecise == nom.getRawBits())
	return true;
return false; };

bool		Fixed::operator!=(Fixed &nom) {
if (this->_imprecise != nom.getRawBits())
	return true;
return false; };

Fixed&		min(Fixed &f1, Fixed &f2) {
	return f1.getRawBits() > f2.getRawBits() ? f2 : f1; };

Fixed&		max(Fixed &f1, Fixed &f2) {
	return f1.getRawBits() < f2.getRawBits() ? f2 : f1; };

Fixed const&	min(Fixed const &f1, Fixed const &f2) {
	return f1.getRawBits() > f2.getRawBits() ? f2 : f1; };

Fixed const&	max(Fixed const &f1, Fixed const &f2) {
	return f1.getRawBits() < f2.getRawBits() ? f2 : f1; };

Fixed::Fixed(const float f) {
	this->_imprecise = roundf(f * 256.0); };

Fixed::Fixed(const int i) {
	this->_imprecise = i * 256; };

std::ostream&	operator<<(std::ostream& o, Fixed const& nom) {
	o << nom.getRawBits() / 256.0;
	return o; };

const int Fixed::_bits = 8;
