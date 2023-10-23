/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naiskend <naiskend@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 18:46:12 by naiskend          #+#    #+#             */
/*   Updated: 2023/02/05 20:22:41 by naiskend         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	ft_print(int count, char ilk_char, char orta_char, char son_char)
{
	int	i;

	i = 1;
	while (i <= count)
	{
		if (i == 1)
			ft_putchar(ilk_char);
		else if (i == count)
			ft_putchar(son_char);
		else
			ft_putchar(orta_char);
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 1;
	if (y < 0 || x < 0)
		write(1, "BEN BUNU YAPAMAM", 16);
	if (x >= 1 && y >= 1)
	{
		while (i <= y)
		{
			if (i == 1)
				ft_print(x, 'A', 'B', 'C');
			else if (i == y)
				ft_print(x, 'A', 'B', 'C');
			else
				ft_print(x, 'B', ' ', 'B');
			i++;
		}
	}
}
