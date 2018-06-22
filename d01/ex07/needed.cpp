/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   needed.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 23:35:00 by sjones            #+#    #+#             */
/*   Updated: 2018/01/08 15:51:33 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int main(int ac, char **av) {
	if (ac != 4) {
		std::cout << "usage: ./replace [filename] [string to replace] [replacement string]" << std::endl;
		exit(0); }
	std::string		wordToReplace(av[2]);
	std::string		wordToReplaceWith(av[3]);
	std::ifstream	in(av[1]);
	char			*name = av[1];
	strcat(name, ".replace");
	std::ofstream	out(name);
	if (!in) {
		std::cerr << "Could not open " << av[1] << "\n";
		return 1; }
	if (wordToReplace == "" || wordToReplaceWith == "") {
		std::cout << "strings can't be empty" << std::endl;
		return 1; }
	std::string line;
	std::size_t len = wordToReplace.length();
	while (getline(in, line)) {
		while (true) {
			size_t pos = line.find(wordToReplace);
			if (pos != std::string::npos)
				line.replace(pos, len, wordToReplaceWith);
			else
				break;
		}
		out << line << '\n'; 
	}
};
