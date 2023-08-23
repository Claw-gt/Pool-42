/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 10:49:19 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/23 11:42:48 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	int	i = 0;
	char	palabra[61] = "nUL lYd 43fYh";
	palabra[0] = *ft_strcapitalize(palabra);
	
	while(palabra[i] != '\0')
	{
		printf("%c", palabra[i]);
		i++;
	}
	return (0);
}
