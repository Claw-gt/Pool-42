/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 18:15:30 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/21 18:25:42 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char src[50] = "hola";
	char dest[50] = "adios";
//	printf("%s", strncat(dest, src, 3));
	printf("%s", ft_strncat(dest, src, 2));
	return (0);
}
