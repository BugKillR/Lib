#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <string.h>

void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putendl(char const *s);
void	ft_putnbr(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	*ft_memalloc(size_t size);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memcpy(void *dest, void const *src, size_t n);
void	*ft_memccpy(void *dest, void const *src, int c, size_t n);
void	ft_bzero(void *s, size_t n);

int	ft_strlen(char *s);

#endif
