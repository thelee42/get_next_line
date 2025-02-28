/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thelee <thelee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 18:19:39 by thelee            #+#    #+#             */
/*   Updated: 2023/12/26 19:19:53 by thelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s != (char)c)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return ((char *)s);
}

char	*add_line(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*stash;

	if (!s1)
	{
		s1 = malloc(sizeof(char) * 1);
		s1[0] = '\0';
	}
	if (!s1)
		return (NULL);
	stash = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!stash)
		return (NULL);
	i = -1;
	while (s1[++i])
		stash[i] = s1[i];
	j = -1;
	while (s2[++j])
		stash[i + j] = s2[j];
	stash[i + j] = '\0';
	free(s1);
	return (stash);
}
