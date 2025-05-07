#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*ptr;

	ptr = (char *)ft_memalloc(size * sizeof(char));
	if (!ptr)
		return (NULL);
	ft_bzero((void *)ptr, size);
	return (ptr);
}
