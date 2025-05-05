#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*src = "Tamam_Porno";
	char	*arr;
	int	i;
	int	size;

	size = ft_strlen(src);
	arr = (char*)ft_memalloc(size + 1);
	ft_memccpy(arr, src, '_', size);
	i = 0;
	while (i < size + 1)
	{
		ft_putstr_fd("Dec: ", 1);
		ft_putnbr_fd(arr[i], 1);
		ft_putchar_fd('\t', 1);
		ft_putstr_fd("Output: ", 1);
		ft_putchar_fd(arr[i], 1);
		ft_putchar_fd('\n', 1);
		i++;
	}

	return (0);
}
