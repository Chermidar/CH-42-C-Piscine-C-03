/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chermida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 11:03:37 by chermida          #+#    #+#             */
/*   Updated: 2022/05/30 11:03:40 by chermida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != 0)
			i++;
	j = 0;
	while (src[j] != 0)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	return (dest);
}

/*
int	main(void)
{
	char dest0[20] =  "afsdfdsbc";
	char dest[20] = "abfsdfc";
	char src[] = "12agsfgd3";

	printf("\ndest: %s\n", dest);
	printf("src: %s\n \n", src);
	printf("strcat: %s\n", strcat(dest0, src));
	printf("ft_strcat: %s\n\n", ft_strcat(dest, src));
	return (0);
}
*/
/*
concatena un string y lo pone siguiente al anterior
*/