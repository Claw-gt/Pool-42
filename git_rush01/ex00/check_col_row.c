/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_col_row.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 18:27:37 by clagarci          #+#    #+#             */
/*   Updated: 2023/08/19 18:34:14 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_col_row(char *arr, char num_1, char num_2)
{
	if (arr[i] == num_1 && arr[i + 4] != num_2)
		return (1);
	else
		return (0);
}
