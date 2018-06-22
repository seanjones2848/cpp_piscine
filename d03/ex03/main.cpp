/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 13:48:06 by sjones            #+#    #+#             */
/*   Updated: 2018/01/11 13:41:22 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

int		main() {
	FragTrap* Bubba = new FragTrap();
	ScavTrap* Louie = new ScavTrap("Louie");
	ClapTrap Wilfred = ClapTrap();

	Louie->challengeNewcomer(Wilfred.getName());
	Louie->challengeNewcomer(Bubba->getName());
	Wilfred.takeDamage(Bubba->rangedAttack(Wilfred.getName()));
	Bubba->takeDamage(Louie->rangedAttack(Bubba->getName()));
	Louie->takeDamage(Wilfred.rangedAttack(Louie->getName()));
	NinjaTrap Sneaky = NinjaTrap("Sneaky Steve");
	Louie->challengeNewcomer(Sneaky.getName());
	Louie->takeDamage(Wilfred.meleeAttack(Louie->getName()));
	Louie->takeDamage(Sneaky.meleeAttack(Louie->getName()));
	Wilfred.takeDamage(Bubba->meleeAttack(Wilfred.getName()));
	Wilfred.takeDamage(Sneaky.rangedAttack(Wilfred.getName()));
	Bubba->takeDamage(Louie->meleeAttack(Bubba->getName()));
	Bubba->takeDamage(Sneaky.meleeAttack(Bubba->getName()));
	Louie->challengeNewcomer(Wilfred.getName());
	Louie->takeDamage(Bubba->vaulthunter_dot_exe(Louie->getName()));
	Louie->challengeNewcomer(Sneaky.getName());
	Wilfred.takeDamage(Sneaky.ninjaShoebox(Wilfred));
	Louie->takeDamage(Sneaky.ninjaShoebox(*Louie));
	Bubba->takeDamage(Sneaky.ninjaShoebox(*Bubba));
	NinjaTrap Snooky = NinjaTrap("Snooky Snake");
	Sneaky.takeDamage(Snooky.ninjaShoebox(Sneaky));
	delete (Louie);
	delete (Bubba);
};
