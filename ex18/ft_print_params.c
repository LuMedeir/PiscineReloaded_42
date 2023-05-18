/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:00:25 by lumedeir          #+#    #+#             */
/*   Updated: 2023/04/28 14:30:02 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int			k;
	char		*a;

	k = 1;
	while (k < argc)
	{
		a = argv[k];
		while (*a != 0)
		{
			ft_putchar(*a);
			a++;
		}
		ft_putchar('\n');
		k++;
	}
	return (0);
}
