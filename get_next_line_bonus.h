/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maddame <maddame@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 11:11:42 by maddame           #+#    #+#             */
/*   Updated: 2024/11/24 17:18:47 by maddame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s);
int		ft_strchr(const char *s, int c);
char	*ft_strjoin(char const *s1, char const *s2);

char	*ret_line(char **rst, char **o);
char	*return_line(char **rst, char **o, char **p);
char	*get_next_line(int fd);
char	*check_static(int fd, char **rst, char *p, char *tmp);
char	*read_in_buf(int fd, char	**rst, char *buffer);

#endif
