/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afourcad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 17:46:47 by afourcad          #+#    #+#             */
/*   Updated: 2017/08/22 18:53:16 by afourcad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "filler.h"
#include "ft_printf.h"



int	main()
{
	int		p1;
	//char	**board;

	p1 = ft_get_player();
	//board = ft_get_board();
	ft_printf(RED"ICI --> "EOC"%d\n", p1);
	return (0);
}
