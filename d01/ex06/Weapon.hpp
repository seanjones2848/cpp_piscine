/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 23:35:27 by sjones            #+#    #+#             */
/*   Updated: 2018/01/09 11:39:25 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <cstring>
# include <string>

class			Weapon {
	public:
		std::string&	getType();
		void			setType(std::string str);
		Weapon(std::string type);
	protected:
		std::string		_type;
};

#endif
