/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 23:58:45 by sjones            #+#    #+#             */
/*   Updated: 2017/07/07 15:04:42 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include <string>


class			FragTrap {
	public:
		int			rangedAttack(std::string const& target);
		int			meleeAttack(std::string const& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		int			vaulthunter_dot_exe(std::string const& target);
		std::string	getName() { return this->_name; };
		FragTrap&	operator=(FragTrap const& nom);
		FragTrap(FragTrap const& nom);
		FragTrap(std::string name);
		FragTrap();
		~FragTrap();
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
