/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 18:29:55 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/21 19:11:49 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char large[] = "Foo Bar Ba";
	char small[] = "Bar";
	char *ptr = NULL;
	//ptr = strstr(large, small);
	ptr = ft_strstr(large, small);
	printf("%c", *ptr);
}
