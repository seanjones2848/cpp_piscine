/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 23:58:52 by sjones            #+#    #+#             */
/*   Updated: 2018/01/09 22:17:43 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int			FragTrap::rangedAttack(std::string const& target) {
srand(time(NULL) + this->_rand++ % 10);
if (this->_hit == 0) {
	std::cout << "ugh I'm dead, I can't do anything, lame." << std::endl;
	return (0); }
std::string ranged[4] = {
"Chk-chk, BOOM!",
"You're listening to 'Short-Range Damage Radio.'",
"Up close and personal.",
"Shaken, not stirred" };
std::cout << ranged[(rand() % 4)] << " FR4G-TP " << this->_name << " attacks " << target << " at range, causing " << this->_ranged << " points of damage !" << std::endl;
return this->_ranged; };

int			FragTrap::meleeAttack(std::string const& target) {
srand(time(NULL) + this->_rand++ % 9);
if (this->_hit == 0) {
	std::cout << "ugh I'm dead, I can't do anything, lame." << std::endl;
	return (0); }
std::string melee[4] = {
"Guess who?",
"Meet professor punch!",
"Ready for the PUNCHline?!",
"Hyah!" };
std::cout << melee[(rand() % 4)] << " FR4G-TP " << this->_name << " attacks " << target << " with melee, causing " << this->_melee << " points of damage !" << std::endl;
return this->_melee; };

int			FragTrap::vaulthunter_dot_exe(std::string const& target) {
srand(time(NULL) + this->_rand++ % 25);
if (this->_hit == 0) {
	std::cout << "ugh I'm dead, I can't do anything, lame." << std::endl;
	return (0); }
std::string vlt_dot[25] = {
"This time it'll be awesome, I promise!",
"Hey everybody, check out my package!",
"Place your bets!",
"Defragmenting!",
"Recompiling my combat code!",
"Running the sequencer!",
"It's happening... it's happening!",
"It's about to get magical!",
"I'm pulling tricks outta my hat!",
"You can't just program this level of excitement!",
"What will he do next?",
"Things are about to get awesome!",
"Let's get this party started!",
"Glitchy weirdness is term of endearment, right?",
"Push this button, flip this dongle, voila! Help me!",
"square the I, carry the 1... YES!",
"Resequencing combat protocols!",
"Look out everybody, things are a,bout to get awesome!",
"I have an IDEA!",
"Round and around and around she goes!",
"It's like a box of chocolates...",
"Step right up to the sequence of Trapping!",
"Hey everybody, check out my package!",
"Loading combat packages!",
"F to the R to the 4 to the G to the WHAAT!" };
if (this->_enrg > 25) {
	this->_enrg -= 25;
	std::cout << vlt_dot[(rand() % 25)] << " FR4G_TP " << _name <<" deals " << (rand() % 20 + 10) <<  " random damage to " << target << std::endl;
	return (rand() % 20 + 10); }
else
	std::cout << "Out of energy..." << std::endl;
	return 0; };

FragTrap&		FragTrap::operator=(FragTrap const& nom) {
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

FragTrap::FragTrap(FragTrap const& nom) {
	this->_name = nom._name;
	this->_hit = nom._hit;
	this->_max_hit = nom._max_hit;
	this->_enrg = nom._enrg;
	this->_max_enrg = nom._max_enrg;
	this->_melee = nom._melee;
	this->_ranged = nom._ranged;
	this->_dr = nom._dr;
	this->_rand = nom._rand; };

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
srand(time(NULL));
std::string greeting[4] = {
"Ha ha ha! I LIVE! Hahaha!",
"Hahahahaha! I'm alive!",
"Wow, that actually worked?",
"You can't keep a good 'bot down!" };
std::cout << greeting[(rand() % 4)] << std::endl; };

FragTrap::FragTrap() : ClapTrap("Bubba") {
srand(time(NULL));
std::string greeting[5] = {
"Glitching weirdness is a term of endearment, right?",
"Recompiling my combat code!",
"This time it'll be awesome, I promise!",
"Hahaha... I ascend!",
"Ha ha ha! I LIVE! Hahaha!", };
std::cout << greeting[(rand() % 5)] << std::endl; };

FragTrap::~FragTrap() {
srand(time(NULL) + this->_rand++ % 7);
std::string goodbye[5] = {
"I'll get you next time!",
"No fair! I wasn't ready.",
"You got me!",
"Argh arghargh death gurgle gurglegurgle urgh... death.",
"Oh well.", };
std::cout << goodbye[(rand() % 5)] << std::endl; };
