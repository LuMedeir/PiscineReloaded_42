/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 16:07:38 by lumedeir          #+#    #+#             */
/*   Updated: 2023/04/28 11:17:04 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	alpha;

	alpha = 97;
	while (alpha <= 122)
	{
		ft_putchar(alpha++);
	}
}

//#include <unistd.h>
// int	main(void)
// {
// 	ft_print_alphabet();
// }