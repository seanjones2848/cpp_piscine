/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 13:48:06 by sjones            #+#    #+#             */
/*   Updated: 2017/07/07 15:32:25 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main() {
	FragTrap* Louie = new FragTrap("Louie");
	FragTrap Wilfred = FragTrap();

	Wilfred.takeDamage(Louie->rangedAttack(Wilfred.getName()));
	Louie->takeDamage(Wilfred.meleeAttack(Louie->getName()));
	Wilfred.beRepaired(1);
	Louie->beRepaired(3);
	Wilfred.beRepaired(4);
	Louie->beRepaired(7);
	Wilfred.takeDamage(Louie->meleeAttack(Wilfred.getName()));
	Louie->takeDamage(Wilfred.meleeAttack(Louie->getName()));
	Wilfred.beRepaired(5);
	Louie->beRepaired(10);
	Wilfred.beRepaired(11);
	Louie->beRepaired(20);
	Wilfred.takeDamage(Louie->meleeAttack(Wilfred.getName()));
	Louie->takeDamage(Wilfred.meleeAttack(Louie->getName()));
	Wilfred.takeDamage(Louie->vaulthunter_dot_exe(Wilfred.getName()));
	Louie->takeDamage(Wilfred.rangedAttack(Louie->getName()));
	Wilfred.takeDamage(Louie->rangedAttack(Wilfred.getName()));
	Wilfred.takeDamage(Louie->rangedAttack(Wilfred.getName()));
	Louie->takeDamage(Wilfred.vaulthunter_dot_exe(Louie->getName()));
	delete (Louie);
};
