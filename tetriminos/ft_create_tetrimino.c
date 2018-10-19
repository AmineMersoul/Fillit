/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_tetrimino.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amersoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 13:37:20 by amersoul          #+#    #+#             */
/*   Updated: 2018/10/19 13:37:21 by amersoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tetriminos.h"

t_tetriminos	*ft_create_tetrimino(const int data[4][4])
{
	t_tetriminos	*tetrimino;
	int				row;
	int				col;

	if (!(tetrimino = malloc(sizeof(t_tetriminos))))
		return (0);
	if (data)
	{
		row = 0;
		while (row < 4)
		{
			col = 0;
			while (col < 4)
			{
				tetrimino->tetrimino[row][col] = data[row][col];
				col++;
			}
			row++;
		}
		tetrimino->next = NULL;
	}
	return (tetrimino);
}
