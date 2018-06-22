/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 16:03:57 by sjones            #+#    #+#             */
/*   Updated: 2017/07/04 19:34:40 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int		main(int ac, char** av) {
	if (ac == 2)
		for (int i = 0; i < 17; ++i) {
			ZombieEvent(av[1]).randomChump(); }
	else
		std::cout << "put in a catastrophy type!" << std::endl;
};
