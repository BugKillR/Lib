/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeskin <kkeskin@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 00:04:15 by kkeskin           #+#    #+#             */
/*   Updated: 2025/05/12 00:04:16 by kkeskin          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (*s)
	{
		s++;
		i++;
	}
	return (i);
}
