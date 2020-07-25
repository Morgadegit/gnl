/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sraphard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 18:31:49 by sraphard          #+#    #+#             */
/*   Updated: 2020/01/13 18:04:53 by sraphard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char const *s)
{
	int i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	int				i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (((char*)s) + i);
		i++;
	}
	if (!c)
		return (((char*)s) + i);
	return (0);
}

char	*ft_strjoin(char *s1, char const *s2)
{
	int		i;
	int		j;
	char	*new;

	i = 0;
	if (!s1 || !s2)
		return (0);
	if (!(new = malloc((ft_strlen(s1) + ft_strlen(s2) + 1)
					* sizeof(char))))
		return (0);
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	j = i;
	i = 0;
	while (s2[i])
	{
		new[i + j] = s2[i];
		i++;
	}
	new[i + j] = 0;
	free(s1);
	return (new);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (!src)
		return (0);
	if (!dst)
		return (ft_strlen(src));
	i = 0;
	while (src[i] && i + 1 < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize)
		dst[i] = 0;
	return (ft_strlen(src));
}

char	*ft_strdup(char const *s)
{
	char	*dst;
	int		i;

	i = 0;
	if (!(dst = malloc(ft_strlen(s) * sizeof(char) + 1)))
		return (0);
	while (s[i])
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = 0;
	return (dst);
}
