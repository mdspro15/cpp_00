/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schiou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 18:03:40 by schiou            #+#    #+#             */
/*   Updated: 2024/04/11 12:06:00 by schiou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	std::cout << "Welcome our phonebook service!" << std::endl;
	this->i = 0;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Thank you for using our service!" << std::endl;
}

int	PhoneBook::is_only_space(std::string str)
{
	for (size_t i = 0; i < str.size(); i++)
		if (!isspace(str[i]))
			return (0);
	return (1);
}

int	PhoneBook::is_only_digit(std::string str)
{
	for (size_t i = 0; i < str.size(); i++)
		if (!isdigit(str[i]))
			return (0);
	return (1);
}

std::string PhoneBook::getinput(std::string str)
{
	std::string input;
	while (1)
	{
		std::cout << str;
		std::getline(std::cin, input);
		if (is_only_space(input) || input.empty())
			std::cout << "Please enter a non-empty value!" << std::endl;
		else if (str == "Enter your phonenumber: " && !is_only_digit(input))
			std::cout << "Please enter only digit value!" << std::endl;
		else
			break;
	}
	return (input);
}

void PhoneBook::add()
{
	c[this->i % 8].setfirst(getinput("Enter your first name: "));
	c[this->i % 8].setlast(getinput("Enter your last name: "));
	c[this->i % 8].setnick(getinput("Enter your nickname: "));
	c[this->i % 8].setphone(getinput("Enter your phonenumber: "));
	c[this->i % 8].setsecret(getinput("Enter your darkest secret: "));
	c[this->i % 8].setindex((this->i % 8) + 1);
	this->i++;
}

std::string PhoneBook::tenonly(std::string str)
{
	if (str.size() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void PhoneBook::display_all(int len)
{
	std::string	input;
	int	index;

	while (1)
	{
		std::cout << "Which contacts you want to display all? Enter index number: ";
		std::getline(std::cin, input);
		if (!is_only_digit(input))
		{
			std::cout << "Please enter only digit value!"<< std::endl;
			continue ;
		}
		if (is_only_space(input) || input.empty())
		{
			std::cout << "Please enter a non-empty value!" << std::endl;
			continue ;
		}
		index = std::stoi(input);
		if (index > len || index <= 0)
			std::cout << "Invalid index number!" << std::endl;
		else
			break;
	}
	c[index - 1].display();
}

void PhoneBook::search()
{
	int	len;
	int	j;

	if (this->i > 7)
		len = 8;
	else
		len = this->i;
	j = 0;
	if (len == 0)
	{
		std::cout << "Phonebook is empty, Please add someone!" << std::endl;
		return ;
	}
	std::cout << "|" << std::setw(10) << "Index";
	std::cout << "|" << std::setw(10) << "First";
	std::cout << "|" << std::setw(10) << "Last";
	std::cout << "|" << std::setw(10) << "Nickname";
	std::cout << "|" << std::endl;
	while (j < len)
	{
		std::cout << "|" << std::setw(10) << c[j].getindex();
		std::cout << "|" << std::setw(10) << tenonly(c[j].getfirst());
		std::cout << "|" << std::setw(10) << tenonly(c[j].getlast());
		std::cout << "|" << std::setw(10) << tenonly(c[j].getnick());
		std::cout << "|" << std::endl;
		j++;
	}
	display_all(len);
}