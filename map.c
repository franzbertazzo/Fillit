/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertazz <fbertazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 14:33:10 by fbertazz          #+#    #+#             */
/*   Updated: 2019/11/24 00:19:02 by fbertazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	create_map(char **map, int mapsize)
{
	int i;
	int	j;

	j = 0;
	while (j < mapsize)
	{
		map[j] = malloc(mapsize + 1);
		i = 0;
		while (i < mapsize)
		{
			map[j][i] = '.';
			i++;
		}
		map[j][i] = 0;
		j++;
	}
	map[j] = NULL;
}

void	clear_map(char **map, int mapsize)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (y < mapsize)
	{
		while (x < mapsize)
		{
			map[y][x] = '.';
			x++;
		}
		x = 0;
		y++;
	}
}

void	print_map(char **map, int size)
{
	int	x;
	int y;

	x = 0;
	y = 0;
	while (y < size)
	{
		while (x < size)
		{
			ft_putchar(map[y][x]);
			x++;
		}
		ft_putchar('\n');
		x = 0;
		y++;
	}
}
