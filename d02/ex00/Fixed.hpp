/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 13:17:57 by sjones            #+#    #+#             */
/*   Updated: 2018/01/09 13:18:53 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <string>

class		Fixed {
	public:
		int			getRawBits( void ) const;
		void		setRawBits( int const raw);
		Fixed&		operator=(Fixed const &other);
		Fixed();
		Fixed(Fixed const& obj);
		~Fixed();
	protected:
		int					_imprecise;
		static const int	_bits;
};

#endif
