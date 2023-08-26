/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   division.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:50:31 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/26 18:24:40 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	decimals(int uds)
{
	int	j;
	int	dec;

	dec = 1;
	j = 0;
	if (uds == 4)
		dec = 1000;
		//buscar en diccionario a partir de entrada 10 hasta el 90
	else if (uds == 7)
		dec = 1000000;
	else
	{
		//buscar en diccionario a partir del 1 hasta el 9
		while (j < uds)
		{
			dec *= 10;
			j++;
		}
	}
	return (dec);
}

int	count_digits(int n, int *units)
{
	while (n > 9)
	{
		n /= 10;
		*units += 1;
	}	
}

int	*entry(int num)
{
	int	units;
	int	aux;
	int	*entries;
	int	i;

	i = 0;
	entries = (int *)malloc(1000000000 * sizeof(int));
	aux = num;
	while (num > 99)
	{
		units = 0;
		/*while (num > 9)
		{
			num /= 10;
			units++;
		}*/
		num = count_units(num, &units);
		if (units == 4 || units == 7)
			entries[i++] = aux % decimals(units);
		else
			entries[i++] = num % 10;
		entries[i++] = decimals(units);
		num = aux % dec;
	}
	entries[i++] = num / 10 * 10;
	entries[i++] = num % 10;
	entries[i++] = -1;
	return (entries);
}
