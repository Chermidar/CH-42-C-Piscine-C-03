/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chermida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 22:16:23 by chermida          #+#    #+#             */
/*   Updated: 2022/05/29 22:16:24 by chermida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (s1[i] == s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i != n)
		return (s1[i] - s2[i]);
	return (0);
}

/*
int	main(void)
{
	char	*str1 = "ABCDEFGHIJ";
	char	*str2 = "AB5555555";

	printf("strncmp:   %d\n", strncmp(str1, str2, 3));
	printf("ft_strncmp: %d\n", ft_strncmp(str1, str2, 3));
}
*/
/*igual pero le indicas a partir de cual caracter es la diferencia*/