/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schiou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 19:10:31 by schiou            #+#    #+#             */
/*   Updated: 2024/04/11 12:01:38 by schiou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	this->first = "";
	this->last = "";
	this->nick = "";
	this->phone = "";
	this->secret = "";
	this->index = 0;	
}

Contact::~Contact()
{

}	

void Contact::setfirst(std::string str)
{
	this->first = str;
}

void Contact::setlast(std::string str)
{
	this->last = str;
}

void Contact::setnick(std::string str)
{
	this->nick = str;
}

void Contact::setphone(std::string str)
{
	this->phone = str;
}

void Contact::setsecret(std::string str)
{
		this->secret = str;
}

void Contact::setindex(int i)
{
	this->index = i;
}

std::string Contact::getfirst()
{
	return (this->first);
}

std::string Contact::getlast()
{
	return (this->last);
}	
		
std::string Contact::getnick()
{
	return (this->nick);
}

int Contact::getindex()
{
	return (this->index);
}

void Contact::display()
{
	std::cout << "First: " << this->first << std::endl;	
	std::cout << "Last: " << this->last << std::endl;	
	std::cout << "Nickname: " << this->nick << std::endl;	
	std::cout << "Phonenumber: " << this->phone << std::endl;	
	std::cout << "Darkest secret: " << this->secret << std::endl;
}	
