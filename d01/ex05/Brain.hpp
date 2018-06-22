/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 15:44:08 by sjones            #+#    #+#             */
/*   Updated: 2017/07/05 22:06:17 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <cstring>
# include <iostream>
# include <sstream>
# include <cstdlib>

class			Brain {
	public:
		std::string		identify();
		Brain();
	protected:
		std::string	_self;
};

#endif
