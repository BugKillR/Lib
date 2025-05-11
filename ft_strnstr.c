/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeskin <kkeskin@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 00:50:20 by kkeskin           #+#    #+#             */
/*   Updated: 2025/05/12 00:50:21 by kkeskin          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	k;
	size_t	needle_len;

	i = 0;
	if (!needle[0])
		return ((char *)haystack);
	needle_len = ft_strlen((char *)needle);
	while (haystack[i] && i < n)
	{
		k = 0;
		while ((i + k) < n && haystack[i + k] && haystack[i + k] == needle[k])
			k++;
		if (needle_len == k)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
