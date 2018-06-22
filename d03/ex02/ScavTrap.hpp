/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 15:39:18 by sjones            #+#    #+#             */
/*   Updated: 2017/07/07 21:31:36 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class			ScavTrap: public ClapTrap {
	public:
		int			rangedAttack(std::string const& target);
		int			meleeAttack(std::string const& target);
		void		challengeNewcomer(std::string const& target);
		ScavTrap&	operator=(ScavTrap const& nom);
		ScavTrap(ScavTrap const& nom);
		ScavTrap(std::string name);
		ScavTrap();
		~ScavTrap(); };

#endif
