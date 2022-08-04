/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleitao <gabrielarleitao@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:34:26 by gleitao           #+#    #+#             */
/*   Updated: 2022/07/19 15:35:18 by gleitao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

// char main(void)
// {
// 	char arr[] = "Hello";
// 	char *src = arr;
// 	char dests[] = "Bye";

// 	printf("%s\n", dests);
// 	char *dest = ft_strcpy(dests, src);
// 	printf("%s\n", dest);

// }

//strcpy( ) function copies whole content of one string into
//another string. 

//Whereas, strncpy( ) function copies portion of 
//contents of one string into another string. If destination string 
//length is less than source string, entire/specified source 
//string value won't be copied into destination string in both cases.