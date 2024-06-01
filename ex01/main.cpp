/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schiou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 18:44:43 by schiou            #+#    #+#             */
/*   Updated: 2024/04/09 13:42:13 by schiou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main()
{
	PhoneBook phonebook;
	std::string command;

	while (1)
	{
		std::cout << "Enter your command ADD/SEARCH/EXIT: ";
		getline(std::cin, command);
		if (command == "ADD" || command == "add")
			phonebook.add();
		else if (command == "SEARCH" || command == "search")
			phonebook.search();
		else if (command == "EXIT" || command == "exit")
			break ;
		else
			std::cout << "Invalid command!" << std::endl;
	}
	return (0);
}
