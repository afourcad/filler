/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afourcad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 18:01:54 by afourcad          #+#    #+#             */
/*   Updated: 2017/08/22 18:54:00 by afourcad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "filler.h"
#include "get_next_line.h"

int	ft_get_player(void)
{
	char	*line;
	char	*tmp;
	int		player;
	
	player = 0;
	line = NULL;
	tmp = NULL;
	while (get_next_line(0, &line))
	{
		if ((tmp = ft_strstr(line, " p1 : [players/")))
		{
			player = ft_strcmp(tmp, "afourcad");
			free(line);
			return (player == 1 ? 1 : 2);
		}
		free(line);
		line = NULL;
	}
	return (0);
}

/*char **ft_get_board(void)
{
	
}*/
