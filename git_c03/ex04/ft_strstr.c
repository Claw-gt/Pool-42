/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 18:30:39 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/22 11:59:33 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

int	complete_word(char *str, char *to_find, int i)
{
	int	k;
	int	j;
	int	equal;

	k = i;
	j = 0;
	equal = 1;
	while (equal == 1 && j < ft_strlen(to_find))
	{
		if (str[k] != to_find[j])
		{
			equal = 0;
			i++;
		}
		j++;
		k++;
	}
	return (equal);
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*ptr;
	int		i;
	int		equal;

	equal = 0;
	i = 0;
	while (str[i] != '\0' && equal == 0)
	{
		if (str[i] == to_find[0])
		{
			ptr = &str[i];
			equal = complete_word(str, to_find, i);
		}	
		i++;
	}
	if (to_find[0] == '\0')
		ptr = str;
	else if (equal == 0)
		ptr = 0;
	return (ptr);
}
