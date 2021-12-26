/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 18:37:34 by mbenbajj          #+#    #+#             */
/*   Updated: 2021/12/26 17:47:31 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

// includes :
# include <stdlib.h>
# include <string.h>
# include <stddef.h>
# include <unistd.h>
# include <fcntl.h>
# include <limits.h>

// functions :
size_t	ft_strlen(char *s, char c);
void	*ft_calloc(size_t count, size_t size);
int		ft_srh(char *str, int start);
char	*ft_join(char *s1, char *s2);
char	*ft_rest(char *str);
char	*ft_get_line(char *str);
char	*get_stc_buff(int fd, char *stc_buff);
char	*get_next_line(int fd);
#endif
