/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 23:58:45 by sjones            #+#    #+#             */
/*   Updated: 2017/07/07 21:34:41 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class			FragTrap: public ClapTrap {
	public:
		int			rangedAttack(std::string const& target);
		int			meleeAttack(std::string const& target);
		int			vaulthunter_dot_exe(std::string const& target);
		FragTrap&	operator=(FragTrap const& nom);
		FragTrap(FragTrap const& nom);
		FragTrap(std::string name);
		FragTrap();
		~FragTrap(); };

#endif
