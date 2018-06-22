/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   anon8.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 12:05:22 by sjones            #+#    #+#             */
/*   Updated: 2018/01/09 10:43:29 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "anon8.hpp"

void		Contact::setIndex(int i) { this->_index = i; };
void		Contact::setFirst(std::string str) { this->_first = str; };
void		Contact::setLast(std::string str) { this->_last = str; };
void		Contact::setNick(std::string str) { this->_nick = str; };
void		Contact::setLogin(std::string str) { this->_login = str; };
void		Contact::setAddr(std::string str) { this->_addr = str; };
void		Contact::setEmail(std::string str) { this->_email = str; };
void		Contact::setPhone(std::string str) { this->_phone = str; };
void		Contact::setBday(std::string str) { this->_bday = str; };
void		Contact::setMeal(std::string str) { this->_meal = str; };
void		Contact::setUndies(std::string str) { this->_undies = str; };
void		Contact::setSecret(std::string str) { this->_secret = str; };
int			Contact::getIndex() { return this->_index; };
std::string	Contact::getFirst() { return this->_first; };
std::string	Contact::getLast() { return this->_last; };
std::string	Contact::getNick() { return this->_nick; };
std::string	Contact::getLogin() { return this->_login; };
std::string	Contact::getAddr() { return this->_addr; };
std::string	Contact::getEmail() { return this->_email; };
std::string	Contact::getPhone() { return this->_phone; };
std::string	Contact::getBday() { return this->_bday; };
std::string	Contact::getMeal() { return this->_meal; };
std::string	Contact::getUndies() { return this->_undies; };
std::string	Contact::getSecret() { return this->_secret; };
Contact::~Contact() { std::cout << "*~*~ Thank you for using anon8 ~*~*" << this->_undies << this->_secret << std::endl; };

void		Contact::put_all() {
	std::cout << "First Name      | " << this->getFirst() << std::endl;
	std::cout << "Last Name       | " << this->getLast() << std::endl;
	std::cout << "Nickname        | " << this->getNick() << std::endl;
	std::cout << "Login           | " << this->getLogin() << std::endl;
	std::cout << "Postal Address  | " << this->getAddr() << std::endl;
	std::cout << "Email Address   | " << this->getEmail() << std::endl;
	std::cout << "Phone Number    | " << this->getPhone() << std::endl;
	std::cout << "Birthday Date   | " << this->getBday() << std::endl;
	std::cout << "Favorite Meal   | " << this->getMeal() << std::endl;
	std::cout << "Underwear Color | " << this->getUndies() << std::endl;
	std::cout << "Darkest Secret  | " << this->getSecret() << std::endl;
};

void		Contact::add_command(int i) {
	this->_index = i;
	std::cout << "What is your first name?" << std::endl;
	std::getline(std::cin, this->_first);
	std::cout << "What is your last name?" << std::endl;
	std::getline(std::cin, this->_last);
	std::cout << "What is your nick name?" << std::endl;
	std::getline(std::cin, this->_nick);
	std::cout << "What is your login?" << std::endl;
	std::getline(std::cin, this->_login);
	std::cout << "What is your postal address?" << std::endl;
	std::getline(std::cin, this->_addr);
	std::cout << "What is your email address?" << std::endl;
	std::getline(std::cin, this->_email);
	std::cout << "What is your phone number?" << std::endl;
	std::getline(std::cin, this->_phone);
	std::cout << "What is your birth date?" << std::endl;
	std::getline(std::cin, this->_bday);
	std::cout << "What is your favorite meal?" << std::endl;
	std::getline(std::cin, this->_meal);
	std::cout << "What is your underwear color?" << std::endl;
	std::getline(std::cin, this->_undies);
	std::cout << "What is your darkest secret?" << std::endl;
	std::getline(std::cin, this->_secret); };

int			search_command(Contact contacts[8], int i) {
	std::string		num;
	if (i > 0) {
		for (int j = 0; j < i; ++j) {
			std::cout << std::right << std::setw(10) << contacts[j].getIndex() << " | ";
			if (contacts[j].getFirst().length() > 10)
				std::cout << std::right << std::setw(10) << contacts[j].getFirst().substr(0, 9).append(".") << " | ";
			else
				std::cout << std::right << std::setw(10) << contacts[j].getFirst().substr(0, 10) << " | ";
			if (contacts[j].getLast().length() > 10)
				std::cout << std::right << std::setw(10) << contacts[j].getLast().substr(0, 9).append(".") << " | ";
			else
				std::cout << std::right << std::setw(10) << contacts[j].getLast().substr(0, 10) << " | ";
			if (contacts[j].getNick().length() > 10)
				std::cout << std::right << std::setw(10) << contacts[j].getNick().substr(0, 9).append(".") << " | " << std::endl;
			else
				std::cout << std::right << std::setw(10) << contacts[j].getNick().substr(0, 10) << " | " << std::endl; } }
	else {
		std::cout << "You need to ADD contacts before you can SEARCH!" << std::endl;
		return 0; }
	while (1) {
		std::cout << "What index would you like to see?" << std::endl;
		std::getline(std::cin, num);
		if (num == "EXIT")
			break;
		try {
			if (std::stoi(num) >= 0 && std::stoi(num) < i)
				contacts[std::stoi(num)].put_all();
			else
				std::cout << "pick again" << std::endl;
			continue; }
		catch (std::exception) {
			std::cout << "To get out type EXIT" << std::endl;
			continue; }
	};
	return 0; };

int		main(void){
	Contact		contacts[8];
	Contact		newcontact;
	std::string	buff;
	int			i = 0;

	std::cout << "*~*~ Welcome to anon8, a place for momentary contact ~*~*" << std::endl;
	while (1) {
		std::cout << "would you like to ADD, SEARCH, or EXIT?" << std::endl;
		std::getline(std::cin, buff);
		std::cout << buff << " was selected" << std::endl;
		if (std::cin.fail()) {
			std::cerr << "Couldn't read that, try again please." << std::endl;
			std::cin.clear();
			continue; }
		else if (buff == "EXIT")
			return 0;
		else if (buff == "ADD") {
			std::cout << "You want to ADD!" << std::endl;
			if (i < 8) {
				contacts[i].add_command(i);
				i++; }
			else
				std::cout << "You have 8 contacts." << std::endl; }
		else if (buff == "SEARCH") {
			std::cout << "you want to SEARCH!" << std::endl;
			search_command(contacts, i); }
		else
			std::cout << "you put " << buff << " you dingus" << std::endl;
	};
};
