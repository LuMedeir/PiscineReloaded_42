/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 16:47:43 by lumedeir          #+#    #+#             */
/*   Updated: 2023/04/28 11:47:34 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while ('\0' != str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	unsigned int	i;
	char			*dest;

	dest = malloc(ft_strlen(src) + 1);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	src[] = "teste teste";
// 	char	*dest2 = ft_strdup(src);

// 	printf("%s\n", dest2);
// }