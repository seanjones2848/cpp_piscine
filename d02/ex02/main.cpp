/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 19:56:55 by sjones            #+#    #+#             */
/*   Updated: 2018/01/10 16:12:26 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	Fixed c = b;
	Fixed d(0.0078125f);

	std::cout << "pdf tests" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << max(a,b) << std::endl;
	std::cout << "extended tests" << std::endl;
	std::cout << a + b << std::endl;
	std::cout << b - a << std::endl;
	std::cout << b / a << std::endl;
	std::cout << min(a,b) << std::endl;
	std::cout << c << std::endl;
	std::cout << --c << std::endl;
	std::cout << c << std::endl;
	std::cout << c-- << std::endl;
	std::cout << c << std::endl;
	if (a < c)
		std::cout << "related < fine" << std::endl;
	if (c > a)
		std::cout << "related > fine" << std::endl;
	if (a <= c && a <= d)
		std::cout << "related <= fine" << std::endl;
	if (c >= a && a >= d)
		std::cout << "related >= fine" << std::endl;
	if (a != c)
		std::cout << "related != fine" << std::endl;
	if (a == d)
		std::cout << "related == fine" << std::endl;
	return (0);
}
