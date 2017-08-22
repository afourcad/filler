/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_multi_free.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afourcad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 17:17:55 by afourcad          #+#    #+#             */
/*   Updated: 2017/07/26 17:17:58 by afourcad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_str_multi_free(char ***str)
{
	int	i;

	i = 0;
	if (str)
	{
		if (*str)
			while ((*str)[i])
			{
				free((*str)[i]);
				(*str)[i] = NULL;
				++i;
			}
		free(*str);
		*str = NULL;
	}
}
