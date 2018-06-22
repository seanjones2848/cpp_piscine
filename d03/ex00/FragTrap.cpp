/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 23:58:52 by sjones            #+#    #+#             */
/*   Updated: 2018/01/10 23:44:10 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int			FragTrap::rangedAttack(std::string const& target) {
srand(time(NULL) + this->_rand++ % 10);
if (this->_hit == 0) {
	std::cout << "ugh I'm dead, I can't do anything, lame." << std::endl;
	return (0); }
std::string ranged[10] = {
"In yo' FACE!",
"Get ready for some Fragtrap face time!",
"Chk-chk, BOOM!",
"You're listening to 'Short-Range Damage Radio.'",
"Up close and personal.",
"Shaken, not stirred",
"The moon is not enough!",
"I'm Trap, Claptrap. Double oh... Trap.",
"I expect you to die!",
"I'd do anything for a woman with a gun."};
std::cout << ranged[(rand() % 10)] << " FR4G-TP " << this->_name << " attacks " << target << " at range, causing " << this->_ranged << " points of damage !" << std::endl;
return this->_ranged; };

int			FragTrap::meleeAttack(std::string const& target) {
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
std::cout << melee[(rand() % 9)] << " FR4G-TP " << this->_name << " attacks " << target << " with melee, causing " << this->_melee << " points of damage !" << std::endl;
return this->_melee; };

void		FragTrap::takeDamage(unsigned int amount) {
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
std::cout << damage[(rand() % 13)] << " FR4G_TP " << this->_name << " got dealt " << amount <<  " damage reducing them to " << this->_hit << " hit points." << std::endl; };

void		FragTrap::beRepaired(unsigned int amount) {
srand(time(NULL) + this->_rand++);
std::string repair[5] = {
"Make my day.",
"Gimme your best shot.",
"Hit me, baby!",
"Ya feeling lucky, punk?",
"Sweet life juice!"};
this->_hit = static_cast<int>(100 - amount) < this->_hit ? 100 : this->_hit + amount;
std::cout << repair[(rand() % 5)] << " FR4G_TP " << this->_name << " was repaired " << amount <<  " putting their hit points at " << this->_hit << std::endl; }

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
	std::cout << vlt_dot[(rand() % 25)] << " FR4G_TP deals " << (rand() % 20 + 10) <<  " random damage to " << target << std::endl;
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

FragTrap::FragTrap(std::string name) :
_name(name),
_level(1),
_hit(100),
_max_hit(100),
_enrg(100),
_max_enrg(100),
_melee(30),
_ranged(20),
_dr(5) {
srand(time(NULL));
_rand = rand();
std::string greeting[12] = {
"Hey everybody! Check out my package!",
"Let's get this party started!",
"Glitching weirdness is a term of endearment, right?",
"Recompiling my combat code!",
"This time it'll be awesome, I promise!",
"Hahaha... I ascend!",
"Ha ha ha! I LIVE! Hahaha!",
"Hahahahaha! I'm alive!",
"Wow, that actually worked?",
"You can't keep a good 'bot down!",
"I'm back! Woo!",
"Look out everybody! Things are about to get awesome!" };
std::cout << greeting[(rand() % 12)] << std::endl; };

FragTrap::FragTrap() :
_name("Wilfred"),
_level(1),
_hit(100),
_max_hit(100),
_enrg(100),
_max_enrg(100),
_melee(30),
_ranged(20),
_dr(5) {
struct timespec tmp;
clock_gettime(CLOCK_MONOTONIC,&tmp);
srand(tmp.tv_nsec);
_rand = rand();
std::string greeting[12] = {
"Hey everybody! Check out my package!",
"Let's get this party started!",
"Glitching weirdness is a term of endearment, right?",
"Recompiling my combat code!",
"This time it'll be awesome, I promise!",
"Hahaha... I ascend!",
"Ha ha ha! I LIVE! Hahaha!",
"Hahahahaha! I'm alive!",
"Wow, that actually worked?",
"You can't keep a good 'bot down!",
"I'm back! Woo!",
"Look out everybody! Things are about to get awesome!" };
std::cout << greeting[(rand() % 12)] << std::endl; };

FragTrap::~FragTrap() {
srand(time(NULL) + this->_rand++ % 15);
std::string goodbye[15] = {
"NOOO!",
"Poop.",
"I'll get you next time!",
"No fair! I wasn't ready.",
"You got me!",
"Argh arghargh death gurgle gurglegurgle urgh... death.",
"Oh well.",
"This could've gone better!",
"I'm leaking!",
"Good thing I don't have a soul!",
"Aww! Come on!",
"Robot down!",
"No, nononono NO!",
"I have many regrets!",
"Crap happens." };
std::cout << goodbye[(rand() % 15)] << std::endl; };
