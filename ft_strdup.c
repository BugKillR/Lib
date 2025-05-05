#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*arr;
	int	i;

	i = 0;
	if (!s)
		return (NULL);
	i = ft_strlen((char *)s);
	arr = (char *)ft_memalloc(i + 1);
	if (!arr)
		return (NULL);
	i = 0;
	while (s[i])
	{
		arr[i] = s[i];
		i++;
	}
	return (arr);
}
