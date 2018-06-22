/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 22:11:36 by sjones            #+#    #+#             */
/*   Updated: 2018/01/11 13:10:01 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class			NinjaTrap: virtual public ClapTrap {
	public:
		int			rangedAttack(std::string const& target);
		int			meleeAttack(std::string const& target);
		int			ninjaShoebox(ClapTrap & target);
		int			ninjaShoebox(FragTrap & target);
		int			ninjaShoebox(ScavTrap & target);
		int			ninjaShoebox(NinjaTrap & target);
		NinjaTrap&	operator=(NinjaTrap const& nom);
		NinjaTrap(NinjaTrap const& nom);
		NinjaTrap(std::string name);
		NinjaTrap();
		~NinjaTrap(); };

#endif
