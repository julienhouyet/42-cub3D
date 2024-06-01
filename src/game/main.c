/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 10:11:48 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/01 13:23:25 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/cub3d.h"

int	main(int argc, char **argv)
{
	t_game	*game;

	game = NULL;
	if (argc != 2)
		ft_free_error("Error\nArgument\n", game);
	game = ft_safe_calloc(sizeof(t_game), 1, "game\n", game);
	check_map(game, argv);
	game->map->map[(int)game->player->pos_y / TILE_SIZE] \
		[(int)game->player->pos_x / TILE_SIZE] = '0';
	ft_init_game(game);
	return (0);
}
