/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleitao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 17:53:46 by gleitao           #+#    #+#             */
/*   Updated: 2022/07/30 17:53:49 by gleitao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char d)
{
	write(1, &d, 1);
}

void	ft_putstr(char *str)
{
	int	a;

	a = 0;
	while (*(str + a) != '\0')
	{
		ft_putchar(*(str + a));
		a++;
	}
	ft_putchar('\n');
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main(int argc, char **argv)
{
	int		b;
	int		c;
	char	*tmp;

	b = 1;
	c = argc;
	while (++b <= argc)
	{
		c = 1;
		while (++c <= argc - 1)
		{
			if (ft_strcmp(argv[c], argv[c - 1]) < 0)
			{
				tmp = argv[c];
				argv[c] = argv[c - 1];
				argv[c - 1] = tmp;
			}
		}
	}
	b = 0;
	while (++b < argc)
		ft_putstr(argv[b]);
}
