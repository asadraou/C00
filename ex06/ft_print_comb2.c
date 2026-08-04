/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 18:46:11 by asadraou          #+#    #+#             */
/*   Updated: 2026/07/19 13:33:27 by asadraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	printit(int x)
{
	char	y;
	char	z;

	y = x / 10 + '0';
	z = x % 10 + '0';
	write (1, &y, 1);
	write (1, &z, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0 ;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			printit(a);
			write(1, " ", 1);
			printit(b);
			if (!(a == 98 && b == 99))
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
