/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 13:17:57 by sjones            #+#    #+#             */
/*   Updated: 2018/01/10 16:05:29 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <string>
# include <cmath>

class		Fixed {
	public:
		int					getRawBits( void ) const;
		void				setRawBits( int const raw);
		float				toFloat( void ) const;
		int					toInt(void) const;
		Fixed&				operator=(Fixed const &other);
		Fixed&				operator--();
		Fixed				operator--(int nom);
		Fixed&				operator++();
		Fixed				operator++(int nom);
		Fixed				operator+(Fixed const &nom) const;
		Fixed				operator-(Fixed const &nom) const;
		Fixed				operator*(Fixed const &nom) const;
		Fixed				operator/(Fixed const &nom) const;
		bool				operator<(Fixed const &nom);
		bool				operator<(Fixed &nom);
		bool				operator>(Fixed const &nom);
		bool				operator>(Fixed &nom);
		bool				operator<=(Fixed const &nom);
		bool				operator<=(Fixed &nom);
		bool				operator>=(Fixed const &nom);
		bool				operator>=(Fixed &nom);
		bool				operator==(Fixed const &nom);
		bool				operator==(Fixed &nom);
		bool				operator!=(Fixed const &nom);
		bool				operator!=(Fixed &nom);
		Fixed();
		Fixed(const int i);
		Fixed(const float f);
		Fixed(Fixed const& obj);
		~Fixed();
	protected:
		int					_imprecise;
		static const int	_bits;
};

Fixed&			min(Fixed &f1, Fixed &f2);
Fixed&			max(Fixed &f1, Fixed &f2);
Fixed const&	min(Fixed const &f1, Fixed const &f2);
Fixed const&	max(Fixed const &f1, Fixed const &f2);
std::ostream&	operator<<(std::ostream& o, Fixed const& nom);

#endif
