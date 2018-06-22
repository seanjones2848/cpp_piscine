/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 13:48:06 by sjones            #+#    #+#             */
/*   Updated: 2017/07/07 15:55:14 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main() {
	ScavTrap* Louie = new ScavTrap("Louie");
	FragTrap Wilfred = FragTrap();

	Louie->challengeNewcomer(Wilfred.getName());
	Louie->takeDamage(Wilfred.rangedAttack(Louie->getName()));
	Louie->challengeNewcomer(Wilfred.getName());
	Louie->takeDamage(Wilfred.meleeAttack(Louie->getName()));
	Louie->challengeNewcomer(Wilfred.getName());
	Louie->takeDamage(Wilfred.vaulthunter_dot_exe(Louie->getName()));
	Louie->challengeNewcomer(Wilfred.getName());
	delete (Louie);
};
