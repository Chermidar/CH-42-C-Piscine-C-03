/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chermida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 11:11:14 by chermida          #+#    #+#             */
/*   Updated: 2022/05/30 11:11:16 by chermida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include<unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != 0)
		i++;
	j = 0;
	while ((src[j] != 0) && j < nb)
	{
		(dest[i + j] = src[j]);
			j++;
	}
	dest[i + j] = 0;
	return (dest);
}

/*
int	main(void)
{
	char	src[20] = "supercalifra...";
	char	dest[20] = "it'ssssssss";
    char	src2[20] = "supercalifra...";
	char	dest2[20] = "it'ssssssss";
	unsigned int nb;

	nb = 10;
	printf("src: %s\n", src);
	printf("ndest: %s\n", dest);
    printf("ft_strncat es: %s\n", ft_strncat(dest, src, nb));
	printf("src: %s\n", src2);
	printf("ndest: %s\n", dest2);
	printf("strncat es: %s\n", strncat(dest2, src2, nb));
	return (0);
}
*/
/*
mismo que el anterior hasta el numero que yo le diga
*/