/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isonly_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afourcad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 17:17:33 by afourcad          #+#    #+#             */
/*   Updated: 2017/07/26 17:18:17 by afourcad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isonly_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_isalpha(str[i]))
			return (0);
		++i;
	}
	return (1);
}
