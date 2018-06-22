/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 21:53:14 by sjones            #+#    #+#             */
/*   Updated: 2018/01/08 14:51:49 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main() {
	std::string str = "HI THIS IS BRAIN";
	std::string* str_pointer = &str;
	std::string& str_reference = str;
	std::cout << "pointer: " << *str_pointer << "\nreference: " << str_reference << std::endl; };
