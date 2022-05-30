/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chermida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 11:32:03 by chermida          #+#    #+#             */
/*   Updated: 2022/05/30 11:32:07 by chermida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == 0)
		return (str);
	while (str[i] != 0)
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == 0)
				return (str + i);
				j++;
		}
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	char str[] = "It'sssss Supercalifra...";
	char to_find[] = " ";

	printf("%s\n", strstr (str, to_find));
	printf("%s\n", ft_strstr (str, to_find));
}
*/
/*
imprime a partir del to_find (incluyendolo)
*/