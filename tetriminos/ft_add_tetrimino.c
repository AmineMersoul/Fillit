/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_tetrimino.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amersoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 16:03:22 by amersoul          #+#    #+#             */
/*   Updated: 2018/10/19 16:03:23 by amersoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tetriminos.h"

void	ft_add_tetrimino(t_tetriminos **tetriminos, t_tetriminos *new)
{
	new->next = *tetriminos;
	*tetriminos = new;
}
