/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscarpul <lscarpul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 17:27:04 by lscarpul          #+#    #+#             */
/*   Updated: 2025/12/04 18:52:45 by lscarpul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
	unsigned char a;
	a = (unsigned char)c;
	
	while (*s != '\0')
	{
		if (*s == a)
		{
			return ((char *)s);
		}
		s++;
	}
	if (a == '\0')
	return ((char*)s);
	return (NULL);
	
}
// int main()
// {
// 	char str[] = "ciao a tutti";
// 	char to_find = 'a';
// 	printf("%s", ft_strchr(str, to_find));
// 	return (0);
// }
