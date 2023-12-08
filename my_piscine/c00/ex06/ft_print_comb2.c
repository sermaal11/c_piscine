/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarin-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 16:54:01 by smarin-a          #+#    #+#             */
/*   Updated: 2023/06/06 17:45:23 by smarin-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb2(void)
{
	int		num1;
	int		num2;
	char	t;

	num1 = 0;
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			t = (num1 / 10) + '0';
			write (1, &t, 1);
			t = (num1 % 10) + '0';
			write (1, &t, 1);
			write (1, " ", 1);
			t = (num2 / 10) + '0';
			write (1, &t, 1);
			t = (num2 % 10) + '0';
			write (1, &t, 1);
			if (!((num1 == 98) && (num2 == 99)))
				write (1, ", ", 2);
			num2++;
		}
		num1++;
	}
}