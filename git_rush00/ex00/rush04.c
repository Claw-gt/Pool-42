/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 19:08:28 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/12 19:12:06 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	check_condition(int r, int c, int tall, int width);

void	rush(int x, int y)
{
	int	row;
	int	column;

	row = 0;
	column = 0;
	while (row <= (y - 1))
	{
		while (column <= (x - 1))
		{
			check_condition(row, column, y, x);
			column++;
		}
		if (x > 0)
			ft_putchar('\n');
		column = 0;
		row++;
	}
}

void	check_condition(int r, int c, int tall, int width)
{
	if ((r == 0 && c == 0) || (r == (tall - 1) && c == (width - 1)))
		ft_putchar('A');
	else if ((r == 0 && c == (width - 1)) || (r == (tall - 1) && c == 0))
		ft_putchar('C');
	else if (r == 0 || r == tall - 1 || c == 0 || c == (width - 1))
		ft_putchar('B');
	else
		ft_putchar(' ');
}
