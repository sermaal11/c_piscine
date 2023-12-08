/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarin-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 21:13:54 by smarin-a          #+#    #+#             */
/*   Updated: 2023/06/15 19:50:32 by smarin-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check(char *str, char *to_find)
{
	int	i;

	i = 0;
	while (to_find[i] != '\0')
	{
		if (str[i] == to_find[i])
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	while (*str != '\0')
	{
		if (*str == to_find[0])
		{
			if (check(str, to_find) == 1)
			{
				return (str);
			}
		}
		str++;
	}
	return (0);
}
