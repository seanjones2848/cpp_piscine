/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 12:49:02 by sjones            #+#    #+#             */
/*   Updated: 2018/01/09 10:47:00 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string str) {
	name = str;
	std::cout << "Pony " << name << " is now here :)" << std::endl; }

Pony::~Pony() {
	std::cout << "Pony " << name << " is now dead :(" << std::endl; }

void	ponyOnTheHeap(std::string name) {
	Pony	*pony = new Pony(name);

	std::cout << "neigh, I'm a pony named " << pony->name << " on your heap!!" << std::endl;
	delete pony; }

void	ponyOnTheStack(std::string name) {
	Pony	pony = Pony(name);

	std::cout << "neigh, I'm a pony named " << pony.name << " on your stack!!" << std::endl;}
