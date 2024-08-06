/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thelee <thelee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 18:21:02 by thelee            #+#    #+#             */
/*   Updated: 2023/12/26 18:25:14 by thelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

int		ft_strlen(char *str);
char	*ft_strchr(char *s, int c);
char	*add_line(char *s1, char *s2);

char	*read_line(int fd, char *str);
char	*get_line(char *str);
char	*next_line(char *str);
char	*get_next_line(int fd);

#endif