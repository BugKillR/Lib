/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeskin <kkeskin@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 23:21:14 by kkeskin           #+#    #+#             */
/*   Updated: 2025/05/11 23:21:15 by kkeskin          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	k;
	int	needle_len;

	i = 0;
	if (!needle[0])
		return ((char *)haystack);
	needle_len = ft_strlen((char *)needle);
	while (haystack[i])
	{
		k = 0;
		while (needle[k] && haystack[i + k] && haystack[i + k] == needle[k])
			k++;
		if (needle_len == k)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
