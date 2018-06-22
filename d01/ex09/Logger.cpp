/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 11:45:08 by sjones            #+#    #+#             */
/*   Updated: 2018/01/09 19:29:37 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

Logger::Logger(std::string file) : _file(file) {
	_file = file;
}

void		Logger::logToConsole(std::string entry) {
	std::cout << entry << std::endl;
}

void		Logger::logToFile(std::string entry) {
	std::ofstream out(_file, std::ios_base::app);
	out << entry << std::endl;
}

std::string	Logger::makeLogEntry(std::string message) {
	std::time_t time = std::time(nullptr);
	std::string entry = std::asctime(std::localtime(&time)) + message;
	return entry;
}

void		Logger::log(std::string const & dest, std::string const & message) {
	std::string destStr[] = {"file", "console"};
	Log log[2] = {&Logger::logToFile, &Logger::logToConsole};

	for (int i = 0; i < 2; i++)
		if (destStr[i] == dest)
		{
			(this->*(log[i]))(makeLogEntry(message));
			break;
		}
}
