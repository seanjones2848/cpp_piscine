/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 23:51:41 by sjones            #+#    #+#             */
/*   Updated: 2017/07/06 00:33:59 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <string>
# include <iostream>
# include "Weapon.hpp"

class			HumanA {
	public:
		void		attack();
		HumanA(std::string name, Weapon& weapon);
	protected:
		Weapon&		_weapon;
		std::string	_name;
};

#endif
