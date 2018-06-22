/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 11:45:01 by sjones            #+#    #+#             */
/*   Updated: 2018/01/09 17:58:32 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
# define LOGGER_HPP
# include <string>
# include <string.h>
# include <iostream>
# include <fstream>
# include <ctime>

class			Logger
{
	typedef void (Logger::*Log)(std::string entry);

	private:
		std::string	_file;
		void		logToConsole(std::string entry);
		void		logToFile(std::string entry);
		std::string	makeLogEntry(std::string message);
	public:
		Logger(std::string file);
		void		log(std::string const & dest, std::string const & message);
};

#endif
