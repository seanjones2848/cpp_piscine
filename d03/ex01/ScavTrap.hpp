/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 15:39:18 by sjones            #+#    #+#             */
/*   Updated: 2017/07/07 15:49:56 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include <string>


class			ScavTrap {
	public:
		int			rangedAttack(std::string const& target);
		int			meleeAttack(std::string const& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		challengeNewcomer(std::string const& target);
		std::string	getName() { return this->_name; };
		ScavTrap&	operator=(ScavTrap const& nom);
		ScavTrap(ScavTrap const& nom);
		ScavTrap(std::string name);
		ScavTrap();
		~ScavTrap();
	protected:
		std::string	_name;
		int			_level;
		int			_hit;
		int			_max_hit;
		int			_enrg;
		int			_max_enrg;
		int			_melee;
		int			_ranged;
		int			_dr;
		int			_rand; };

#endif
