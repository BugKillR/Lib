#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*ptr;
	size_t	i;

	if (!(ptr = malloc(size)))
		return (NULL);
	i = 0;
	while (i < size)
	{
		((unsigned char*)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}
