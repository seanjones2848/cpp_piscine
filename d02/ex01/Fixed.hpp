/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 13:17:57 by sjones            #+#    #+#             */
/*   Updated: 2018/01/09 13:36:17 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <string>
# include <cmath>

class		Fixed {
	public:
		int			getRawBits( void ) const;
		void		setRawBits( int const raw);
		float		tofloat( void ) const;
		int			toInt(void) const;
		Fixed&		operator=(Fixed const &other);
		Fixed();
		Fixed(const int i);
		Fixed(const float f);
		Fixed(Fixed const& obj);
		~Fixed();
	protected:
		int					_imprecise;
		static const int	_bits;
};

std::ostream&		operator<<(std::ostream& o, Fixed const& nom);

#endif
