/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 13:48:06 by sjones            #+#    #+#             */
/*   Updated: 2018/01/09 20:16:43 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main() {
	FragTrap* Bubba = new FragTrap();
	ScavTrap* Louie = new ScavTrap("Louie");
	ClapTrap Wilfred = ClapTrap();

	Louie->challengeNewcomer(Wilfred.getName());
	Louie->challengeNewcomer(Bubba->getName());
	Wilfred.takeDamage(Bubba->rangedAttack(Wilfred.getName()));
	Bubba->takeDamage(Louie->rangedAttack(Bubba->getName()));
	Louie->takeDamage(Wilfred.rangedAttack(Louie->getName()));
	Louie->challengeNewcomer(Wilfred.getName());
	Louie->takeDamage(Wilfred.meleeAttack(Louie->getName()));
	Wilfred.takeDamage(Bubba->meleeAttack(Wilfred.getName()));
	Bubba->takeDamage(Louie->meleeAttack(Bubba->getName()));
	Louie->challengeNewcomer(Wilfred.getName());
	Louie->takeDamage(Bubba->vaulthunter_dot_exe(Louie->getName()));
	Louie->challengeNewcomer(Wilfred.getName());
	delete (Louie);
	delete (Bubba);
};
