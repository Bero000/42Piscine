/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beeren <beeren@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 15:44:13 by beeren            #+#    #+#             */
/*   Updated: 2023/02/25 08:50:34 by beeren           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	c;
	int	i;

	c = 1;
	i = 0;
	if (argc > 1)
	{
		while (c < argc)
		{
			i = 0;
			while (argv[c][i] != '\0')
			{
				write(1, &argv[c][i], 1);
				i++;
			}
			write(1, "\n", 1);
			c++;
		}
	}
	return (0);
}
