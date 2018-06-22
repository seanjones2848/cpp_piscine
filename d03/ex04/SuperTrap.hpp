/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 13:10:05 by sjones            #+#    #+#             */
/*   Updated: 2018/01/11 13:22:19 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, NinjaTrap
{
	public:
		SuperTrap();
		SuperTrap(std::string name);
		~SuperTrap();
		SuperTrap(SuperTrap const & other);
		SuperTrap	&operator=(SuperTrap const & other);
	private:
		using FragTrap::_hit;
		using FragTrap::_max_hit;
		using NinjaTrap::_enrg;
		using NinjaTrap::_max_enrg;
		using NinjaTrap::_melee;
		using NinjaTrap::meleeAttack;
		using FragTrap::_ranged;
		using FragTrap::rangedAttack;
		using FragTrap::_dr;
};

#endif
