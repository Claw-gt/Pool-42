/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 13:06:53 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/21 13:19:07 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char s1[] = "holfef";
	char s2[] = "holfifefkjn";
	printf("%d\n", ft_strncmp(s1, s2, 2));
	printf("%d", strncmp(s1, s2, 2));
	return (0);
}
