/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beeren <beeren@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:59:59 by beeren            #+#    #+#             */
/*   Updated: 2023/02/15 15:22:25 by beeren           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	newword;

	i = 0;
	newword = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{	
			if (newword == 1)
				str[i] -= 32;
			newword = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			newword = 0;
		}
		else
		{
			newword = 1;
		}
		i++;
	}
	return (str);
}
