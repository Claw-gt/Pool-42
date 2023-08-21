/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 13:30:55 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/21 18:27:50 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char src[50] = "hello";
	char dest[50] = "bye";
//	printf("String1:%s ", strcat(s1, s2));
	printf("String2:%s", ft_strcat(dest,src));
}
