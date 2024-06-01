/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schiou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 17:55:18 by schiou            #+#    #+#             */
/*   Updated: 2024/04/11 11:33:46 by schiou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact c[8];
		int		i;

	public:
		PhoneBook();
		~PhoneBook();
		int	is_only_space(std::string str);
		int	is_only_digit(std::string str);
		std::string getinput(std::string str);
		std::string tenonly(std::string str);
		void display_all(int len);
		void add();
		void search();
};

#endif
