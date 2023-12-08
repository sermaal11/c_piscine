/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarin-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 11:53:24 by smarin-a          #+#    #+#             */
/*   Updated: 2023/06/19 16:03:33 by smarin-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_spaces(char sp)
{
	if (sp == ' ' || sp == '\t' || sp == '\n' || sp == '\v'
		|| sp == '\f' || sp == '\r')
	{
		return (1);
	}
	return (0);
}

int	ft_is_number(char num)
{
	if (num >= '0' && num <= '9')
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	contador;
	int	minsimb;
	int	num;

	contador = 0;
	minsimb = 1;
	num = 0;
	while (ft_is_spaces(str[contador]))
		contador++;
	while (str[contador] == '-' || str[contador] == '+')
	{
		if (str[contador] == '-')
			minsimb = minsimb * (-1);
		contador++;
	}
	while (ft_is_number(str[contador]))
	{
		num = num * 10 + minsimb * (str[contador] - '0');
		contador++;
	}
	return (num);
}
