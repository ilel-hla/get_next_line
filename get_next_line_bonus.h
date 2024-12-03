/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilel-hla <ilel-hla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 21:02:12 by ilel-hla          #+#    #+#             */
/*   Updated: 2024/12/03 21:30:52 by ilel-hla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <limits.h>

char	*get_next_line(int fd);
char	*ft_strjoin(char *stash, char *buffer);
size_t	ft_strlen(char *str);
char	*ft_strchr(char *s, int c);
char	*ft_strdup(const char *s1);
char	*ft_read(int fd, char *buffer);
char	*ft_freejoin(char *buffer, char *n_buffer);
char	*get_remainder_line(char *buffer);
char	*ft_get_line(char *buffer);

#endif
