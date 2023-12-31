/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balcalde <balcalde@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 09:17:31 by balcalde          #+#    #+#             */
/*   Updated: 2023/10/11 09:44:38 by balcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

char	*ft_read_till_newline_char(int fd, char *prev_line);
char	*ft_get_new_line(char *prev_line, int i);
char	*ft_save_prev_line(char *prev_line);
char	*get_next_line(int fd);
char	*ft_free(char	*str);
size_t	ft_strlen(char *s);
char	*ft_strchr(char *s, int c);
char	*ft_str(char *s1, char *s2, char *str);
char	*ft_strjoin(char *s1, char *s2);
#endif
