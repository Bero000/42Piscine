/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beeren <beeren@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 20:41:08 by beeren            #+#    #+#             */
/*   Updated: 2023/02/17 20:41:26 by beeren           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	x;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		x = 0;
		while (str[i + x] == to_find[x] && str[i])
		{
			if (to_find[x + 1] == '\0')
				return (&str[i]);
			x++;
		}
		i++;
	}
	return (0);
}
