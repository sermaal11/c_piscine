/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarin-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:50:13 by smarin-a          #+#    #+#             */
/*   Updated: 2023/06/14 17:42:30 by smarin-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if ((flag == 0) && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
			flag = 1;
		}
		else if ((str[i] >= 0 && str[i] <= 47)
			|| (str[i] >= 58 && str[i] <= 64)
			|| (str[i] >= 91 && str[i] <= 96)
			|| (str[i] >= 123 && str[i] <= 127))
					flag = 0;
		else
			flag = 1;
		i++;
	}
	return (str);
}
