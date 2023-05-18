/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:45:33 by lumedeir          #+#    #+#             */
/*   Updated: 2023/04/28 11:30:51 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{	
	while (*str != '\0')
	{
		ft_putchar(*str++);
	}
}

//#include <unistd.h>
// int    main(void)
// {
// 	char str[] = "teste";
//  	ft_putstr(str);
// }