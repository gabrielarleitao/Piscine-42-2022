/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleitao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 14:28:10 by gleitao           #+#    #+#             */
/*   Updated: 2022/07/31 14:28:13 by gleitao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_str_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcat2(char *destination, char *source)
{
	int	str_size;

	str_size = 0;
	str_size = ft_str_length(destination);
	ft_strcpy (destination + str_size, source);
	return (destination);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		str_len;
	int		i;
	char	*str;

	str_len = 0;
	i = 0;
	while (i < size)
	{
		str_len = str_len + ft_str_length(strs[i]);
		i++;
	}
	str_len = str_len + ((size -1) * ft_str_length(sep));
	str = (char *)malloc((str_len + 1) * sizeof(char));
	if (str != NULL)
	{
		i = 0;
		while (i < size)
		{
			ft_strcat2 (str, strs[i]);
			if (i < (size - 1))
				ft_strcat2(str, sep);
			i++;
		}
	}
	return (str);
}

// int	main(void)
// {
// 	char	**strs;
// 	char	*separator;
// 	char	*result;
// 	char	size;

// 	size = 3;
// 	strs = (char **)malloc(3 * sizeof(char *));
// 	strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
// 	strs[1] = (char *)malloc(sizeof(char) * 10 + 1);
// 	strs[2] = (char *)malloc(sizeof(char) * 8 + 1);
// 	strs[0] = "Oi";
// 	strs[1] = "avaliador,";
// 	strs[2] = "sou gira";
// 	separator = "   ";
// 	result = ft_strjoin(size, strs, separator);
// 	printf("%s$\n", result);
// 	free (result);
// 	return (0);
// }