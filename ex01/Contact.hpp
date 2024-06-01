/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schiou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 17:46:34 by schiou            #+#    #+#             */
/*   Updated: 2024/04/11 11:52:55 by schiou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iomanip>
#include <iostream>

class Contact
{
	private:
		std::string first;
		std::string last;
		std::string nick;
		std::string phone;
		std::string secret;
		int			index;

	public:
		Contact();
		~Contact();
		void	setfirst(std::string str);
		void	setlast(std::string str);
		void	setnick(std::string str);
		void	setphone(std::string str);
		void	setsecret(std::string str);
		void	setindex(int i);
		std::string getfirst();
		std::string getlast();
		std::string getnick();
		int		getindex();
		void	display();
};
#endif