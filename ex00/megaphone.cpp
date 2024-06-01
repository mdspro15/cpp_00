/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schiou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 18:27:26 by schiou            #+#    #+#             */
/*   Updated: 2024/04/11 09:47:07 by schiou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	ft_toupper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

int	main(int ac, char **argv)
{
	int	i;
	int	j;
	
	if (ac == 1)
		std::cout << "*LOUD AND UNBEARABLE FEEDBACK NOISE*";
	else
	{
		i = 1;
		while (i < ac)
		{
			j = 0;
			while (argv[i][j])
			{
				std::cout << ft_toupper(argv[i][j]);
				j++;
			}
			if (i < ac)
				std::cout << ' ';
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}
