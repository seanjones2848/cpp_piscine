/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 15:39:09 by sjones            #+#    #+#             */
/*   Updated: 2017/07/07 21:50:34 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int			ScavTrap::rangedAttack(std::string const& target) {
srand(time(NULL) + this->_rand++ % 10);
if (this->_hit == 0) {
	std::cout << "ugh I'm dead, I can't do anything, lame." << std::endl;
	return (0); }
std::string ranged[4] = {
"Get ready for some Claptrap face time!",
"The moon is not enough!",
"I'm Trap, Claptrap. Double oh... Trap.",
"I expect you to die!" };
std::cout << ranged[(rand() % 4)] << " SC4V-TP " << this->_name << " attacks " << target << " at range, causing " << this->_ranged << " points of damage !" << std::endl;
return this->_ranged; };

int			ScavTrap::meleeAttack(std::string const& target) {
srand(time(NULL) + this->_rand++ % 9);
if (this->_hit == 0) {
	std::cout << "ugh I'm dead, I can't do anything, lame." << std::endl;
	return (0); }
std::string melee[3] = {
"Pain school is now in session",
"Heyyah!",
"Take that!" };
std::cout << melee[(rand() % 3)] << " SC4V-TP " << this->_name << " attacks " << target << " with melee, causing " << this->_melee << " points of damage !" << std::endl;
return this->_melee; };

void		ScavTrap::challengeNewcomer(std::string const& target) {
srand(time(NULL) + this->_rand++ % 11);
std::string challenge[11] = {
" You versus me! Me versus you! Either way!",
" I will prove to you my robotic superiority!",
" Dance battle! Or, you know... regular battle.",
" Man versus machine! Very tiny streamlined machine!",
" Care to have a friendly duel?",
" I can take ya! ... I think.",
" Ow, what was that for?",
" Oh, it's on now!",
" You wanna fight with me?! Put 'em up! ... Put 'em up?",
" A million baddies, and you wanna hit me? Aww!",
" Now? But I... I just... okay..." };
	std::cout << "Hey " << target << challenge[(rand() % 11)] << std::endl; };

ScavTrap&		ScavTrap::operator=(ScavTrap const& nom) {
	this->_name = nom._name;
	this->_hit = nom._hit;
	this->_max_hit = nom._max_hit;
	this->_enrg = nom._enrg;
	this->_max_enrg = nom._max_enrg;
	this->_melee = nom._melee;
	this->_ranged = nom._ranged;
	this->_dr = nom._dr;
	this->_rand = nom._rand;
	return *this;};

ScavTrap::ScavTrap(ScavTrap const& nom) {
	this->_name = nom._name;
	this->_hit = nom._hit;
	this->_max_hit = nom._max_hit;
	this->_enrg = nom._enrg;
	this->_max_enrg = nom._max_enrg;
	this->_melee = nom._melee;
	this->_ranged = nom._ranged;
	this->_dr = nom._dr;
	this->_rand = nom._rand; };

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
this->_enrg = 50;
this->_max_enrg = 50;
this->_melee = 20;
this->_ranged = 15;
this->_dr = 3;
srand(time(NULL));
std::string greeting[5] = {
"Let's get this party started!",
"Glitching weirdness is a term of endearment, right?",
"Recompiling my combat code!",
"This time it'll be awesome, I promise!",
"Hahaha... I ascend!", };
std::cout << greeting[(rand() % 5)] << std::endl; };

ScavTrap::ScavTrap() : ClapTrap("Louie") {
this->_enrg = 50;
this->_max_enrg = 50;
this->_melee = 20;
this->_ranged = 15;
this->_dr = 3;
std::string greeting[5] = {
"Glitching weirdness is a term of endearment, right?",
"Recompiling my combat code!",
"Wow, that actually worked?",
"This time it'll be awesome, I promise!",
"Hahaha... I ascend!", };
std::cout << greeting[(rand() % 5)] << std::endl; };

ScavTrap::~ScavTrap() {
srand(time(NULL) + this->_rand++ % 8);
std::string goodbye[6] = {
"Good thing I don't have a soul!",
"Aww! Come on!",
"Robot down!",
"No, nononono NO!",
"I have many regrets!",
"Crap happens." };
std::cout << goodbye[(rand() % 6)] << std::endl; };
