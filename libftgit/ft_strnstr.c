/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscarpul <lscarpul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 15:37:32 by lscarpul          #+#    #+#             */
/*   Updated: 2025/12/12 14:09:57 by lscarpul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	if (!str || !to_find)
		return (NULL);
	if (to_find[0] == '\0')
		return ((char *)str);
	i = 0;
	while (i < len && str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (i + j < len && str[i + j] != '\0' && to_find[j] != '\0'
					&& str[i + j] == to_find[j])
				j++;
			if (to_find[j] == '\0')
				return ((char *)(str + i));
		}
		i++;
	}
	return (NULL);
}

// int main(void)
// {
//     const char *h = "let's goo a il mio cane";
//     const char *n = "a";
//     char *res;
//     res = ft_strnstr(h, n, 5); 
//     printf("len=5: %s\n", res ? res : "NULL");
//     res = ft_strnstr(h, n, 15); 
//     printf("len=10: %s\n", res ? res : "NULL");
//     res = ft_strnstr(h, "", 0); 
//     printf("empty needle: %s\n", res ? res : "NULL");
//     return (0);
// }