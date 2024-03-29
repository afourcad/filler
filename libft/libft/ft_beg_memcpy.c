/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afourcad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 16:51:01 by afourcad          #+#    #+#             */
/*   Updated: 2017/08/21 16:21:27 by afourcad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_beg_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	const char		*tmp_src;
	char			*tmp_dest;

	i = 0;
	tmp_src = src;
	tmp_dest = dest;
	while (i < n)
	{
		tmp_dest[i] = tmp_src[i];
		i++;
	}
	return (dest);
}
