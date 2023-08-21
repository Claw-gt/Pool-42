/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 11:15:30 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/21 12:41:41 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	int	diff;

	diff = 0;
	char s1[] = "ad";
	char s2[] = "hcyf";
	diff = ft_strcmp(s1, s2);
	int diff2 = strcmp(s1, s2);
	printf("%d\n%d",diff, diff2);
	return (0);
}
