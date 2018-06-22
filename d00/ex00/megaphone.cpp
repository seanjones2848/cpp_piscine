/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 10:16:50 by sjones            #+#    #+#             */
/*   Updated: 2018/01/08 13:18:29 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>
#include <stdio.h>
#include <string>

int main(int ac, char **av)
{
	if (ac < 2) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return 0; }
	for (int i = 1; i < ac; ++i) {
		for (size_t j = 0; j < std::string (av[i]).length(); ++j) {
			std::cout << static_cast<char>(toupper(av[i][j])); } }
	std::cout << '\n';
	return 0;
}
