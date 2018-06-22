/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 11:45:14 by sjones            #+#    #+#             */
/*   Updated: 2018/01/09 12:47:21 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int main(int ac, char** av)
{
	std::string	file;
	std::string	dest;
	std::string	message;

	if (ac == 4 && (strcmp(av[2], "file") == 0 || strcmp(av[2], "console") == 0))
	{
		file = av[1];
		dest = av[2];
		message = av[3];
	}
	else
		std::cout << "usage: ./logger [file name] [output (file|console)] [message]" << std::endl;
	Logger(file).log(dest, message);
	return (0);
}
