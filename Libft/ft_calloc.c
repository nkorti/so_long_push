#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*pointer;

	if (size && count >= SIZE_MAX / size)
		return (0);
	pointer = malloc(count * size);
	if (!pointer)
		return (0);
	ft_bzero(pointer, count * size);
	return (pointer);
}
