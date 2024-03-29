/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afourcad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 18:40:25 by afourcad          #+#    #+#             */
/*   Updated: 2017/07/26 17:18:31 by afourcad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_strfree(char **str)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[++i])
			free(str[i]);
	}
}
