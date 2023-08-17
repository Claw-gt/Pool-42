/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 13:08:16 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/16 13:11:23 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	numeric;

	numeric = 0;
	if (*str == '\0')
	{
		numeric = 1;
	}
	while (*str != '\0')
	{
		if ((*str <= '9' && *str >= '0'))
		{
			numeric = 1;
		}
		else
		{
			numeric = 0;
			break ;
		}
		str++;
	}
	return (numeric);
}
