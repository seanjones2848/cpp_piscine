/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 15:44:33 by sjones            #+#    #+#             */
/*   Updated: 2018/01/09 11:34:04 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP
# include "Brain.hpp"

class		Human {
	public:
		Brain		getBrain();
		std::string	identify();
		Human();
		Human(std::string name);
	protected:
		Brain		_mind;
		std::string	_name;
};

#endif
