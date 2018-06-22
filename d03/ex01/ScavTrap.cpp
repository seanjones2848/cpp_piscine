/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 15:39:09 by sjones            #+#    #+#             */
/*   Updated: 2018/01/10 23:43:45 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int			ScavTrap::rangedAttack(std::string const& target) {
srand(time(NULL) + this->_rand++ % 10);
if (this->_hit == 0) {
	std::cout << "ugh I'm dead, I can't do anything, lame." << std::endl;
	return (0); }
std::string ranged[10] = {
"In yo' FACE!",
"Get ready for some Scavtrap face time!",
"Chk-chk, BOOM!",
"You're listening to 'Short-Range Damage Radio.'",
"Up close and personal.",
"Shaken, not stirred",
"The moon is not enough!",
"I'm Trap, Claptrap. Double oh... Trap.",
"I expect you to die!",
"I'd do anything for a woman with a gun."};
std::cout << ranged[(_rand % 10)] << " SC4V-TP " << this->_name << " attacks " << target << " at range, causing " << this->_ranged << " points of damage !" << std::endl;
return this->_ranged; };

int			ScavTrap::meleeAttack(std::string const& target) {
srand(time(NULL) + this->_rand++ % 9);
if (this->_hit == 0) {
	std::cout << "ugh I'm dead, I can't do anything, lame." << std::endl;
	return (0); }
std::string melee[9] = {
"This is why you do your homework!",
"Pain school is now in session",
"Guess who?",
"Meet professor punch!",
"Ready for the PUNCHline?!",
"Hyah!",
"Heyyah!",
"Take that!",
"Bop!"};
std::cout << melee[(_rand % 9)] << " SC4V-TP " << this->_name << " attacks " << target << " with melee, causing " << this->_melee << " points of damage !" << std::endl;
return this->_melee; };

void		ScavTrap::takeDamage(unsigned int amount) {
srand(time(NULL) + this->_rand++ % 13);
std::string damage[13] = {
"I'll stop talking when I'm dead!",
"I'll die the way I lived: annoying!",
"Come back here! I'll gnaw your legs off!",
"This could've gone better!",
"You look like something a skag barfed up!",
"What's that smell? Oh wait, it's just you!",
"Yo momma's so dumb, she couldn't think of a good ending for this 'yo momma' joke!",
"You're one screw short of a screw!",
"I bet your mom could do better!",
"You look like something a skag barfed up!",
"Oh yeah? Well, uh... yeah.",
"What is that smell? Oh, never mind... it's just you!",
"I'll never go back to the bad place!" };
if ((int)amount > _dr)
	amount -= _dr;
else
	amount = 0;
if (this->_hit - static_cast<int>(amount) < 0)
	this->_hit = 0;
else
	this->_hit = this->_hit - amount;
std::cout << damage[(_rand % 13)] << " SC4V_TP " << this->_name << " got dealt " << amount <<  " damage reducing them to " << this->_hit << " hit points." << std::endl; };

void		ScavTrap::beRepaired(unsigned int amount) {
srand(time(NULL) + this->_rand++);
std::string repair[5] = {
"Make my day.",
"Gimme your best shot.",
"Hit me, baby!",
"Ya feeling lucky, punk?",
"Sweet life juice!"};
this->_hit = static_cast<int>(100 - amount) < this->_hit ? 100 : this->_hit + amount;
std::cout << repair[(_rand % 5)] << " SC4V_TP " << this->_name << " was repaired " << amount <<  " putting their hit points at " << this->_hit << std::endl; }

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
	std::cout << "Hey " << target << challenge[(_rand % 11)] << std::endl; };

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

ScavTrap::ScavTrap(std::string name) :
_name(name),
_level(1),
_hit(100),
_max_hit(100),
_melee(30),
_ranged(20),
_dr(5) {
struct timespec tmp;
clock_gettime(CLOCK_MONOTONIC,&tmp);
srand(tmp.tv_nsec);
_rand = rand();
std::string greeting[6] = {
"Hey everybody! Check out my package!",
"Let's get this party started!",
"Glitching weirdness is a term of endearment, right?",
"Recompiling my combat code!",
"This time it'll be awesome, I promise!",
"Hahaha... I ascend!", };
std::cout << greeting[(_rand % 6)] << std::endl; };

ScavTrap::ScavTrap() :
_name("Louie"),
_level(1),
_hit(100),
_max_hit(100),
_melee(30),
_ranged(20),
_dr(5) {
srand(time(NULL));
_rand = rand();
std::string greeting[6] = {
"Hey everybody! Check out my package!",
"Let's get this party started!",
"Glitching weirdness is a term of endearment, right?",
"Recompiling my combat code!",
"This time it'll be awesome, I promise!",
"Hahaha... I ascend!", };
std::cout << greeting[(_rand % 6)] << std::endl; };

ScavTrap::~ScavTrap() {
srand(time(NULL) + this->_rand++ % 8);
std::string goodbye[8] = {
"This could've gone better!",
"I'm leaking!",
"Good thing I don't have a soul!",
"Aww! Come on!",
"Robot down!",
"No, nononono NO!",
"I have many regrets!",
"Crap happens." };
std::cout << goodbye[(_rand % 8)] << std::endl; };
