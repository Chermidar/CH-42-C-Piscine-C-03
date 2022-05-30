/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chermida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 20:43:37 by chermida          #+#    #+#             */
/*   Updated: 2022/05/29 20:43:39 by chermida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != 0 && s2[i] != 0)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
int	main(void)
{
	char *str1 = "superman";
	char *str2 = "batman";
	printf("strcmp:%d\n", strcmp(str2, str1));
	printf("ft_strcmp:%d\n", ft_strcmp(str2, str1));
	return (0);
}*/
/*
da la diferencia del primer valor diferente de la str entre str1 y str2 en ascii
*/