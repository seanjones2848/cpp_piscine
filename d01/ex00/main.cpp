/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 13:21:50 by sjones            #+#    #+#             */
/*   Updated: 2017/07/04 14:01:49 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

int		main(int ac, char **av) {
	if (ac != 2) {
		std::cout << "Please put your pony's name in!" << std::endl;
		return 0; }
	std::string name = av[1];
	ponyOnTheHeap(name);
	ponyOnTheStack(name);
	return 0; }
