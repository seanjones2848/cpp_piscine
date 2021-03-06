/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 16:06:02 by sjones            #+#    #+#             */
/*   Updated: 2018/01/10 23:42:33 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int			ClapTrap::rangedAttack(std::string const& target) {
srand(time(NULL) + this->_rand++ % 10);
if (this->_hit == 0) {
	std::cout << "ugh I'm dead, I can't do anything, lame." << std::endl;
	return (0); }
std::string ranged[2] = {
"In yo' FACE!",
"I'd do anything for a woman with a gun."};
std::cout << ranged[(rand() % 2)] << " CL4P-TP " << this->_name << " attacks " << target << " at range, causing " << this->_ranged << " points of damage !" << std::endl;
return this->_ranged; };

int			ClapTrap::meleeAttack(std::string const& target) {
srand(time(NULL) + this->_rand++ % 9);
if (this->_hit == 0) {
	std::cout << "ugh I'm dead, I can't do anything, lame." << std::endl;
	return (0); }
std::string melee[2] = {
"This is why you do your homework!",
"Bop!"};
std::cout << melee[(rand() % 2)] << " CL4P-TP " << this->_name << " attacks " << target << " with melee, causing " << this->_melee << " points of damage !" << std::endl;
return this->_melee; };

void		ClapTrap::takeDamage(unsigned int amount) {
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
std::cout << damage[(rand() % 13)] << " CL4P_TP " << this->_name << " got dealt " << amount <<  " damage reducing them to " << this->_hit << " hit points." << std::endl; };

void		ClapTrap::beRepaired(unsigned int amount) {
srand(time(NULL) + this->_rand++);
std::string repair[5] = {
"Make my day.",
"Gimme your best shot.",
"Hit me, baby!",
"Ya feeling lucky, punk?",
"Sweet life juice!"};
this->_hit = static_cast<int>(100 - amount) < this->_hit ? 100 : this->_hit + amount;
std::cout << repair[(rand() % 5)] << " CL4P_TP " << this->_name << " was repaired " << amount <<  " putting their hit points at " << this->_hit << std::endl; }

ClapTrap&		ClapTrap::operator=(ClapTrap const& nom) {
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

ClapTrap::ClapTrap(ClapTrap const& nom) {
	this->_name = nom._name;
	this->_hit = nom._hit;
	this->_max_hit = nom._max_hit;
	this->_enrg = nom._enrg;
	this->_max_enrg = nom._max_enrg;
	this->_melee = nom._melee;
	this->_ranged = nom._ranged;
	this->_dr = nom._dr;
	this->_rand = nom._rand; };

ClapTrap::ClapTrap(std::string name) :
_name(name),
_level(1),
_hit(100),
_max_hit(100),
_enrg(100),
_max_enrg(100),
_melee(30),
_ranged(20),
_dr(5),
_rand(rand()) {
srand(time(NULL));
std::string greeting[3] = {
"Hey everybody! Check out my package!",
"I'm back! Woo!",
"Look out everybody! Things are about to get awesome!" };
std::cout << greeting[(rand() % 3)] << std::endl; };

ClapTrap::ClapTrap() :
_name("Wilfred"),
_level(1),
_hit(100),
_max_hit(100),
_enrg(100),
_max_enrg(100),
_melee(30),
_ranged(20),
_dr(5),
_rand(rand() % 255) {
srand(time(NULL));
std::string greeting[6] = {
"Hey everybody! Check out my package!",
"Let's get this party started!",
"Hahahahaha! I'm alive!",
"You can't keep a good 'bot down!",
"I'm back! Woo!",
"Look out everybody! Things are about to get awesome!" };
std::cout << greeting[(rand() % 6)] << std::endl; };

ClapTrap::~ClapTrap() {
srand(time(NULL) + this->_rand++ % 15);
std::string goodbye[4] = {
"NOOO!",
"Poop.",
"This could've gone better!",
"I'm leaking!" };
std::cout << goodbye[(rand() % 4)] << std::endl; };
