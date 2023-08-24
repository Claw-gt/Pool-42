/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 09:33:32 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/16 10:10:12 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	unsigned int		i;
	char				*dst;
	unsigned int		n;
	char				c;
	//char				*result;
	int					maxsize;

	n = 10;
	maxsize = strlen("hola") + (n - strlen("hola"));
	dst =  malloc(sizeof(*dst) * maxsize);
	c = 'L';
	i = 0;
	//dst = &c;
	dst = ft_strncpy(dst, "hola", n);
	while(i < n)
	{
		if (*dst == '\0')
			printf("\\0");
		else
			printf("%c", *dst);
		i++;
		dst++;
	}
	return(0);
}
