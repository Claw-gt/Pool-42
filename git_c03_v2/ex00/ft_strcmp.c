/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 11:04:08 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/21 12:40:12 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	difference;

	difference = 0;
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
		{
			difference = s1[i] - s2[i];
			return (difference);
			break ;
		}
	}
	/*if (s1[i] == '\0' && s2 == '\0')
		difference = 0;
	else if ((s1[i] != '\0' && s2[i] == '\0')
		|| (s1[i] == '\0' && s2[i] != '\0'))
		difference = s1[i] - s2[i];*/
	//return (difference);
	return (0);
}
