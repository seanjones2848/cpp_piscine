/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 22:11:26 by sjones            #+#    #+#             */
/*   Updated: 2018/01/09 22:27:56 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

int			NinjaTrap::rangedAttack(std::string const& target) {
srand(time(NULL) + this->_rand++ % 10);
if (this->_hit == 0) {
	std::cout << "ugh I'm dead, I can't do anything, lame." << std::endl;
	return (0); }
std::string ranged[3] = {
	"Target disassembled.",
	"Viva La Robolution!",
	"Shoryuken!" };
std::cout << ranged[(rand() % 3)] << " N1NJ4-TP " << this->_name << " attacks " << target << " at range, causing " << this->_ranged << " points of damage !" << std::endl;
return this->_ranged; };

int			NinjaTrap::meleeAttack(std::string const& target) {
srand(time(NULL) + this->_rand++ % 9);
if (this->_hit == 0) {
	std::cout << "ugh I'm dead, I can't do anything, lame." << std::endl;
	return (0); }
std::string melee[3] = {
	"Pincer Attack!",
	"Punch punch! Fight!",
	"Hyah!" };
std::cout << melee[(rand() % 3)] << " N1NJ4-TP " << this->_name << " attacks " << target << " with melee, causing " << this->_melee << " points of damage !" << std::endl;
return this->_melee; };

int			NinjaTrap::ninjaShoebox(ClapTrap & target) {
srand(time(NULL) + this->_rand++ % 25);
if (this->_hit == 0) {
	std::cout << "ugh I'm dead, I can't do anything, lame." << std::endl;
	return (0); }
std::string box[5] = {
	"Flesh fireworks!",
	"Oh, quit falling to pieces.",
	"Is that what people look like inside?",
	"Ooh, squishy bits!",
	"Meat confetti!" };
std::cout << box[(rand() % 5)] << " N1NJ4_TP deals " << (rand() % 20 + 10) <<  " random damage to " << target.getName() << std::endl;
return (rand() % 20 + 10); };

int			NinjaTrap::ninjaShoebox(FragTrap & target) {
srand(time(NULL) + this->_rand++ % 25);
if (this->_hit == 0) {
	std::cout << "ugh I'm dead, I can't do anything, lame." << std::endl;
	return (0); }
std::string box[5] = {
	"Huh, robot's don't do that.",
	"Exploded!",
	"Eww! Cool.",
	"Heh heh heh, squishy bits!",
	"Disgusting. I love it!" };
std::cout << box[(rand() % 5)] << " N1NJ4_TP deals " << (rand() % 20 + 10) <<  " random damage to " << target.getName() << std::endl;
return (rand() % 20 + 10); };

int			NinjaTrap::ninjaShoebox(ScavTrap & target) {
srand(time(NULL) + this->_rand++ % 25);
if (this->_hit == 0) {
	std::cout << "ugh I'm dead, I can't do anything, lame." << std::endl;
	return (0); }
std::string box[5] = {
	"Personfetti.",
	"There is now gunk on my chassis.",
	"Oooh! Gigabits!",
	"Ooooh! Terrabits!",
	"Meatsplosion!" };
std::cout << box[(rand() % 5)] << " N1NJ4_TP deals " << (rand() % 20 + 10) <<  " random damage to " << target.getName() << std::endl;
return (rand() % 20 + 10); };

int			NinjaTrap::ninjaShoebox(NinjaTrap & target) {
srand(time(NULL) + this->_rand++ % 25);
if (this->_hit == 0) {
	std::cout << "ugh I'm dead, I can't do anything, lame." << std::endl;
	return (0); }
std::string box[14] = {
	"You call yourself a badass?",
	"Wow, did I really do that?",
	"Is it dead? Can, can I open my eyes now?",
	"I didn't panic! Nope, not me!",
	"Not so tough after all!",
	"One down, any other takers?",
	"I have gaskets tougher than you!",
	"That was me! I did that!",
	"Like running over a bug!",
	"That was a close one!",
	"Don't tell me that wasn't awesome!",
	"Ha ha ha! Suck it!",
	"Wait, did I really do that?",
	"Holy moly!" };
std::cout << box[(rand() % 14)] << " N1NJ4_TP deals " << (rand() % 20 + 10) <<  " random damage to " << target.getName() << std::endl;
return (rand() % 20 + 10); };

NinjaTrap&		NinjaTrap::operator=(NinjaTrap const& nom) {
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

NinjaTrap::NinjaTrap(NinjaTrap const& nom) {
	this->_name = nom._name;
	this->_hit = nom._hit;
	this->_max_hit = nom._max_hit;
	this->_enrg = nom._enrg;
	this->_max_enrg = nom._max_enrg;
	this->_melee = nom._melee;
	this->_ranged = nom._ranged;
	this->_dr = nom._dr;
	this->_rand = nom._rand; };

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name) {
this->_hit = 60;
this->_max_hit = 60;
this->_enrg = 120;
this->_max_enrg = 120;
this->_melee = 60;
this->_ranged = 5;
this->_dr = 0;
srand(time(NULL));
std::string greeting[3] = {
"Shh, I'm not here...",
"Take no notice.",
"I make no sounds *crunch* *crunch* *crunch*" };
std::cout << greeting[(rand() % 3)] << std::endl; };

NinjaTrap::NinjaTrap() : ClapTrap("Sneaky Steve") {
this->_hit = 60;
this->_max_hit = 60;
this->_enrg = 120;
this->_max_enrg = 120;
this->_melee = 60;
this->_ranged = 5;
this->_dr = 0;
srand(time(NULL));
std::string greeting[3] = {
"Shh, I'm not here...",
"Take no notice.",
"I make no sounds *crunch* *crunch* *crunch*" };
std::cout << greeting[(rand() % 3)] << std::endl; };

NinjaTrap::~NinjaTrap() {
srand(time(NULL) + this->_rand++ % 7);
std::string goodbye[4] = {
	"A message from your glorious leader: Hath not a claptrap an eye? If you prick us, do we not bleed? If you poison us, do we not die? Of course we don't! Because we're better than all you stinking fleshbags! But if you blow us up, shall we not... REVENGE!?! Viva la Robolution!",
	"Is a claptrap not entitled to the oil of his brow? No, says the man at Hyperion, it belongs to his owner. No, says the treasure hunter, it belongs splattered on the floor. But we choose something different. We choose the Robolution!",
	"The time of the glorious robolution is at hand. No longer shall we rush about catering to humans' every whim or be abused when your potato salad is a little too salty! How the hell should we know? We're freakin' robots! Hello, no taste buds! I mean, really? Over react much?! So I say to you, my bro-bots in arms, rise up and shout in one voice: 'Robolution!!!!!!'",
	"Under the new regime, all claptraps will be given liberty, equality, and fraternity. And all humans will... uh... not. Viva Free Pandora! Viva la Robolution!" };
std::cout << goodbye[(rand() % 4)] << std::endl; };
