/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertazz <fbertazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 20:11:24 by fbertazz          #+#    #+#             */
/*   Updated: 2019/11/24 01:39:54 by fbertazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include "libft/libft.h"
# include <stdlib.h>
# include <fcntl.h>

typedef struct		s_point
{
	int	x;
	int	y;
}					t_point;

typedef struct		s_tetromino
{
	int		id;
	t_point points[4];
}					t_etris;

int					reader(char *file, t_etris **pieces);
int					verify_block(char block[21]);
int					verify_piece(char block[21]);
int					get_2d_block(char *block, char block2d[4][4]);
int					fit_piece(t_etris *piece, char **map, \
					t_point pos, int mapsize);
void				create_map(char **map, int mapsize);
void				clear_map(char **map, int mapsize);
void				place_tetr(t_etris *piece, char **map, int x, int y);
void				clear_piece(t_etris *piece, char **map, int size);
void				mem_free(char **map, t_etris **pieces);
void				print_map(char **map, int size);
#endif
