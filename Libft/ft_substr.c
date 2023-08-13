
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	p = ft_calloc((len + 1), 1);
	if (!p)
		return (0);
	while (i < len)
	{
		p[i] = s[start];
		start++;
		i++;
	}
	return (p);
}
