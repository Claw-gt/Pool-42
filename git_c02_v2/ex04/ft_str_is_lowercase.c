/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 13:17:45 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/16 13:26:56 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	alpha_low;

	alpha_low = 0;
	if (*str == '\0')
	{
		alpha_low = 1;
	}
	while (*str != '\0')
	{
		if (*str <= 'z' && *str >= 'a')
		{
			alpha_low = 1;
		}
		else
		{
			alpha_low = 0;
			break ;
		}
		str++;
	}
	return (alpha_low);
}
