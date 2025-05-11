/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeskin <kkeskin@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 18:49:49 by kkeskin           #+#    #+#             */
/*   Updated: 2025/05/11 23:58:33 by kkeskin          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strmemlen(const char *s1, const char *s2)
{
	return (ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	str = (char *)ft_memalloc((ft_strmemlen(s1, s2)));
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		str[ft_strlen((char *)s1) + i] = s2[i];
		i++;
	}
	str[ft_strlen((char *)s1) + i] = '\0';
	return (str);
}
