/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 13:48:06 by sjones            #+#    #+#             */
/*   Updated: 2018/01/18 20:32:45 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

int		main() {
	FragTrap* Bubba = new SuperTrap("Bubba");
	ScavTrap* Louie = new ScavTrap("Louie");

	Louie->takeDamage(Bubba->rangedAttack(Louie->getName()));
	Louie->takeDamage(Bubba->meleeAttack(Louie->getName()));
	delete (Louie);
	delete (Bubba);
};
