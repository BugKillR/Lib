/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeskin <kkeskin@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 23:21:32 by kkeskin           #+#    #+#             */
/*   Updated: 2025/05/11 23:28:57 by kkeskin          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned const char	*ptr;

	ptr = (unsigned const char *)src;
	i = 0;
	if (!src || !dest)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ptr[i];
		i++;
	}
	return (dest);
}
