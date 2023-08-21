/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 18:30:39 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/21 19:13:59 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
char	*ft_strstr(char *str, char *to_find)
{
	char	*ptr;
	int		i;
	int		j;
	int		length;
	int		equal;
	int		k;
	length = 0;
	equal = 0;
	i = 0;
	k = 0;
	while (to_find[length] != '\0')
	{
		length++;
	}
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			ptr = &str[i];
			equal = 1;
			k = i;
			j = 0;
			while (equal == 1 && j < length)
			{
				if (str[k] != to_find[j])
				{
					printf ("not equal");
					ptr = NULL;
					equal = 0;
				}
				j++;
				k++;
			}
		}	
		i++;
	}
	if (to_find[0] == '\0')
	{
		ptr = str;
		return (ptr);
	}
	return (ptr);
}
