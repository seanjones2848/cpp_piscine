/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 19:46:55 by sjones            #+#    #+#             */
/*   Updated: 2018/01/09 11:13:18 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

Zombie**	ZombieHorde::getHorde() { return this->_horde; };

ZombieHorde::ZombieHorde (int N) {
	char			zomnames[N][8];
	int				wordlen = 0;
	char			letter = 0;
	this->_horde = new Zombie*[N];
	this->_N = N;
	srand(time(NULL));
	std::cout << "Now summoning " << _N << " Zombies into my horde." << std::endl;
	for (int i = 0; i < _N; ++i) {
		wordlen = rand() % 6 + 2;
		for (int j = 0; j < wordlen; ++j) {
			srand(time(NULL) + i + j);
			letter = (rand() % 26 + 97);
			zomnames[i][j] = letter; };
		zomnames[i][wordlen] = '\0';
		Zombie* zom = new Zombie(std::string (zomnames[i]), std::string ("Hoarding"));
		this->_horde[i] = zom; };
};

ZombieHorde::~ZombieHorde () {
	for (int i = _N - 1; i >= 0; i--)
		delete _horde[i];
	delete[] _horde;
	std::cout << "The Horde has dispersed" << std::endl;
};


void	ZombieHorde::announce() {
	for (int i = 0; i < _N; ++i) {
		std::cout << "I am " << _horde[i]->getName() << " " << _horde[i]->getType() << " about." << std::endl; }; };
