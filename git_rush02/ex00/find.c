/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 13:04:51 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/26 16:37:12 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	find(char *buff)
{
	int	i;

	i = 0;
	while (buff[i] != '\n')
	{
		write(1, buff[i], 1);
		i++;
	}
}
