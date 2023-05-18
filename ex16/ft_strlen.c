/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:51:33 by lumedeir          #+#    #+#             */
/*   Updated: 2023/04/28 11:32:19 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

// #include <unistd.h>
// #include <stdio.h>
// int main(void)
// {
// 	char    str[] = "teste teste";

//      ft_strlen(str);
//      write(1, str, 12);
//      printf(" tem a quantidade = %d caracteres\n", ft_strlen(str));
//      return (0);
// }