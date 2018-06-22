/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 16:06:12 by sjones            #+#    #+#             */
/*   Updated: 2017/07/07 17:50:22 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <string>


class			ClapTrap {
	public:
		int			rangedAttack(std::string const& target);
		int			meleeAttack(std::string const& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		std::string	getName() { return this->_name; };
		ClapTrap&	operator=(ClapTrap const& nom);
		ClapTrap(ClapTrap const& nom);
		ClapTrap(std::string name);
		ClapTrap();
		~ClapTrap();
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
