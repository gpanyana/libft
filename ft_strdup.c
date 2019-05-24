
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

char	*ft_strdup(const char *s1)
{
	char	*w;
	int		i;

	i = 0;
	if (!(w = (char *) malloc(sizeof(char) * (strlen(s1) + 1))))
		return (NULL);
	while (w[i])
	{
		w[i] = s1[i];
		i++;
	}
	return (w);
}

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

int		main(void)
{
	char	*m;

	m = ft_strdup("hello");
	ft_putstr(m);
	return (0);
}
