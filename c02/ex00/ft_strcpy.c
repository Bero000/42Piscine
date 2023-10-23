/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beeren <beeren@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 23:44:55 by beeren            #+#    #+#             */
/*   Updated: 2023/02/15 15:30:17 by beeren           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcpy(char	*dest, char	*src)
{
	int	i;

	i = 0;
	while (src [i] != '\0')
	{
		dest[i] = src [i];
		i++;
	}
	dest [i] = '\0';
	return (dest);
}