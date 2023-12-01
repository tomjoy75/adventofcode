/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   day01.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 13:00:01 by tjoyeux           #+#    #+#             */
/*   Updated: 2023/12/01 13:31:58 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Check if this is a number and send back the int value
// if no num send -1
int	is_number(char c)
{
	if (c > '0' && c < '9')
		return (c - 48);
	else
		return (-1);
}

int	check_line(char	*str)
{
	int	n, m;
	int	i;

	i = 0;
	n = -1;
	while (str[i] && str[i] != '\n')
	{
		if (is_number(str[i]) != -1)
		{
			m = is_number(str[i]);
			if (n == -1)
				n = m;
		}
		i++;
	}
	if (n != -1)
		return (10 * n + m);
	else
		return (0);
}

//int	check_text(char*str)
//{


int	main(int argc, char **argv)
{
	int	sum;

	sum = check_line(argv[1]);
	printf("Sum : %d\n", sum);
	sum = check_line(argv[2]);
	printf("Sum : %d\n", sum);
}
		 	

