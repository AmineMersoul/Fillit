/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetriminos.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amersoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 13:36:19 by amersoul          #+#    #+#             */
/*   Updated: 2018/10/19 13:36:20 by amersoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __TETRIMINOS_H
# define __TETRIMINOS_H

# include <stdlib.h>

typedef struct	s_tetriminos
{
	int					tetrimino[4][4];
	struct s_tetriminos	*next;
}				t_tetriminos;

t_tetriminos	*ft_create_tetrimino(const int data[4][4]);
void			ft_add_tetrimino(t_tetriminos **tetriminos, t_tetriminos *new);

#endif
