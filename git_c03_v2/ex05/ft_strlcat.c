/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 19:15:19 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/24 14:18:27 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *chain)
{
	int	len;

	len = 0;
	while (chain[len] != '\0')
	{
		len++;
	}
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	length_src;
	unsigned int	length_dest;

	i = 0;
	length_src = ft_strlen(src);
	length_dest = ft_strlen(dest);
	if (size > length_dest)
	{
		while (src[i] != '\0' && i < (size - length_dest - 1))
		{
			dest[length_dest + i] = src[i];
			i++;
		}
		dest[length_dest + i] = '\0';
		return (length_dest + length_src);
	}
	else
		return (size + length_src);
}
