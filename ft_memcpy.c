#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
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
