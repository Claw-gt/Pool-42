/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:22:17 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/28 11:20:38 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	int	num;

	num = 0;
//	printf("%d\n", atoi("  -4ewwr2"));
	printf("%d\n", ft_atoi("  --+-25434ias5"));
	return (0);
}
