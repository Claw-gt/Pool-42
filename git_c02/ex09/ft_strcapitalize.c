/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 09:54:54 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/17 12:46:29 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	alpha(char *str)
{
	if (*str < 65 || (*str > 90 && *str < 97) || (*str > 122))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

int	num(char *str)
{
	if (*str < 48 || *str > 57)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

char	*ft_strcapitalize(char *str)
{
	char	*inicio;
	char	*ptr;

	ptr = str;
	inicio = str;
	while (*str != '\0')
	{
		if (alpha(str) == 0 && num(str) == 0)
		{
			inicio = str + 1;
		}
		else if (str == inicio && (*str <= 122 && *str >= 97))
		{
			*str -= 32;
		}
		str++;
	}
	str = ptr;
	return (str);
}
