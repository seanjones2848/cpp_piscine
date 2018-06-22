/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 15:29:45 by sjones            #+#    #+#             */
/*   Updated: 2018/01/09 10:54:01 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void			ZombieEvent::setZombieType(std::string str) { this->_type = str; };
std::string*	ZombieEvent::getType() { return &(this->_type); };
ZombieEvent::ZombieEvent(std::string str) { this->_type = str; };
ZombieEvent::~ZombieEvent() { std::cout << "Catastrophy over." << std::endl; };

Zombie*			ZombieEvent::newZombie(std::string name) {
	Zombie*		zom = new Zombie(name, this->_type);
	return zom;
};

void			ZombieEvent::randomChump() {
	char			zomnames[256][8];
	int				wordlen = 0;
	char			letter = 0;
	static int		n;
	srand(time(NULL) + n++);
	int				seed = rand() % 256;
	for (int i = 0; i < 256; ++i) {
		wordlen = rand() % 6 + 2;
		for (int j = 0; j < wordlen; ++j) {
			srand(time(NULL) + i + j);
			letter = (rand() % 26 + 97);
			zomnames[i][j] = letter;
		};
		zomnames[i][wordlen] = '\0';
	};
	std::string name = zomnames[seed];
	Zombie *Zom = newZombie(name);
	Zom->announce();
	delete Zom;
};
