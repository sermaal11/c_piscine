/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarin-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 16:09:55 by smarin-a          #+#    #+#             */
/*   Updated: 2023/06/20 22:10:00 by smarin-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	resultado;	

	i = 1;
	resultado = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (i <= nb)
	{
		resultado = resultado * i;
		i++;
	}
	return (resultado);
}
