/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 13:38:52 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/16 13:42:01 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	alpha_up;

	alpha_up = 0;
	if (*str == '\0')
	{
		alpha_up = 1;
	}
	while (*str != '\0')
	{
		if (*str <= 'Z' && *str >= 'A')
		{
			alpha_up = 1;
		}
		else
		{
			alpha_up = 0;
			break ;
		}
		str++;
	}
	return (alpha_up);
}
