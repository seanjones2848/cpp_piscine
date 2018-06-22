/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 20:28:03 by sjones            #+#    #+#             */
/*   Updated: 2017/07/05 16:48:49 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int		main(int ac, char** av) {
	if (ac == 2) {
		if (atol(av[1]) < 1 || atol(av[1]) > 1047848) {
			std::cout << "Please use a positive number under 1047848" << std::endl;
			return (0); }
		ZombieHorde(atoi(av[1])).announce(); }
	else
		std::cout << "Put number of Zombies required in horde." << std::endl;
	return (0);
};
