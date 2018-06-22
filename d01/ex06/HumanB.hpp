/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 00:10:22 by sjones            #+#    #+#             */
/*   Updated: 2018/01/09 11:37:22 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <string>
# include <iostream>
# include "Weapon.hpp"

class			HumanB {
	public:
		void		attack();
		void		setWeapon(Weapon &weapon);
		void		setType(std::string type);
		HumanB(std::string name);
	protected:
		Weapon*		_weapon;
		std::string	_name;
};

#endif
