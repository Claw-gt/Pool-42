/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 09:32:32 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/16 11:38:51 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char				*inicio;
	unsigned int		i;

	inicio = dest;
	i = 0;
	while (i < n && *src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		i++;
	}
	while (i < n)
	{
		*dest = '\0';
		dest++;
		i++;
	}
	return (inicio);
}
