/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 10:48:14 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/22 12:31:48 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char dest[50] = "hola";
	char src[50] = "";
	strlcat(dest, src, 6);
//	ft_strlcat(dest, src, 6);
	printf("%s", dest);
	printf("%lu", strlcat(dest, src, 15));
//	printf("%u", ft_strlcat(dest, src, 15));
	return (0);
}
