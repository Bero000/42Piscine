/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beeren <beeren@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 18:35:28 by beeren            #+#    #+#             */
/*   Updated: 2023/02/25 08:59:10 by beeren           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	c;
	int	i;

	c = argc - 1;
	i = 0;
	if (argc > 1)
	{
		while (c > 0)
		{
			i = 0;
			while (argv[c][i] != '\0')
			{
				write(1, &argv[c][i], 1);
				i++;
			}
			write(1, "\n", 1);
			c--;
		}
	}
	return (0);
}
