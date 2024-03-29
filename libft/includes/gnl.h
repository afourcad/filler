/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsanzey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 14:48:13 by tsanzey           #+#    #+#             */
/*   Updated: 2016/08/06 14:48:15 by tsanzey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef G_N_L_H
# define G_N_L_H
# define BUFF_SIZE 1

int		get_next_line2(int const fd, char **line);
int		get_line_len(int const fd, char **dst);
int		checknewline(char *s);
char	*del_line(char *s, int i);
char	*ft_strjoin2(char *s1, char *s2);

#endif
