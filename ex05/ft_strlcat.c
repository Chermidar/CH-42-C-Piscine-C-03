/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chermida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 11:42:57 by chermida          #+#    #+#             */
/*   Updated: 2022/05/30 11:43:00 by chermida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	k;
	unsigned int	j;
	unsigned int	i;

	k = 0;
	j = 0;
	i = 0;
	while (dest[k])
		k++;
	while (src[j])
		j++;
	if (size <= k)
		return (j + size);
	while (src[i] && (k + i) < (size -1))
	{
		dest[k + i] = src[i];
		i++;
	}
	dest[k + i] = 0;
	return (j + k);
}

/*
int	main(void)
{
	char			src[] = "supercalifragilisticespialidous";
	char			dest1[] = "asu asu asu haaaaaace el marcianito";
	char			dest2[] = "asu asu asu haaaaaace el marcianito";
	unsigned int	size;

	size = 5;
	printf("strlcat (ft): %lu\n", strlcat(dest1, src, size));
	printf("strlcat (dest1): %s\n", dest1);
	printf("ft_strlcat (ft): %u\n", ft_strlcat(dest1, src, size));
	printf("ft_strlcat (dest2): %s\n", dest2);
}
*/
/*
basicamentte lo mismo, concatena pero indica el número excedido del size dado
*/