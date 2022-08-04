/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleitao <gabrielarleitao@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:34:26 by gleitao           #+#    #+#             */
/*   Updated: 2022/07/19 15:35:18 by gleitao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	length;

	i = 0;
	length = 0;
	while (src[length] != '\0')
		length++;
	
	if (size == 0)
		return (length);
	
	while ((src[i] != '\0') && (i < (size - 1)))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (length);
}

// int main(void)
// {
// 	char *font;
// 	char pros[8];
// 	font = "Maracuja";
// 	printf("fonte	: %s\n", font);
// 	printf("tamanho da string copiado %d\n", ft_strlcpy(pros, font, 6));
// 	printf("destino	: %s\n", pros);
// }

// The strlcpy() and strlcat() functions copy and concatenate strings re‐
//      spectively.  They are designed to be safer, more consistent, and less er‐
//      ror prone replacements for strncpy(3) and strncat(3)