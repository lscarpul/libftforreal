/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscarpul <lscarpul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 14:52:29 by lscarpul          #+#    #+#             */
/*   Updated: 2025/12/04 18:08:43 by lscarpul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[j] != '\0')
	{
		j++;
	}
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	return (j);
}

// int	main(void)
// {
// 	char *str = "nudols crazy twin";
// 	char buffer[7];
// 	size_t i=9;
// 	printf ("%zu\n", ft_strlcpy(buffer, str, i));
// 	printf ("%s\n", buffer);
// 	int n = 0;
// }
