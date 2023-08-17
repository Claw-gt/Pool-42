/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 10:34:46 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/16 10:51:06 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	alpha;

	alpha = 0;
	if (*str == '\0')
	{
		alpha = 1;
	}
	while (*str != '\0')
	{
		if ((*str <= 'z' && *str >= 'a') || (*str <= 'Z' && *str >= 'A')) 
		{
			alpha = 1;
		}
		else
		{
			alpha = 0;
			break ;
		}
		str++;
	}
	return (alpha);
}
