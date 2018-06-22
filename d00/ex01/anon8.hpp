/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   anon8.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 11:55:50 by sjones            #+#    #+#             */
/*   Updated: 2018/01/09 10:33:58 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANON8_HPP
# define ANON8_HPP
# include <iostream>
# include <iomanip>
# include <sstream>
# include <cstdio>
# include <cstring>
# include <string>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <ctype.h>

class Contact {
	public:
		void		setIndex(int i);
		void		setFirst(std::string str);
		void		setLast(std::string str);
		void		setNick(std::string str);
		void		setLogin(std::string str);
		void		setAddr(std::string str);
		void		setEmail(std::string str);
		void		setPhone(std::string str);
		void		setBday(std::string str);
		void		setMeal(std::string str);
		void		setUndies(std::string str);
		void		setSecret(std::string str);
		int			getIndex();
		std::string	getFirst();
		std::string	getLast();
		std::string	getNick();
		std::string	getLogin();
		std::string	getAddr();
		std::string	getEmail();
		std::string	getPhone();
		std::string	getBday();
		std::string	getMeal();
		std::string	getUndies();
		std::string	getSecret();
		void		add_command(int i);
		void		put_all();
		~Contact();
	protected:
		int			_index;
		std::string	_first;
		std::string	_last;
		std::string	_nick;
		std::string	_login;
		std::string	_addr;
		std::string	_email;
		std::string _phone;
		std::string	_bday;
		std::string	_meal;
		std::string	_undies;
		std::string	_secret;
};

int		search_command(Contact *contacts[8], int i);

#endif
