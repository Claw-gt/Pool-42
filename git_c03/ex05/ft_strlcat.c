/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 19:15:19 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/22 12:17:20 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	length_src;
	unsigned int	length_dest;

	i = 0;
	length_src = 0;
	length_dest = 0;
	while (src[length_src] != '\0')
	{
		length_src++;
	}
	while (dest[length_dest] != '\0')
	{
		length_dest++;
	}
	if (size > length_dest)
	{
		while (src[i] != '\0' && i < (size - length_dest - 1))
		{
			dest[length_dest + i] = src[i];
			i++;
		}
	}
	dest[length_dest + i] = '\0';
	return (length_dest + length_src);
}
