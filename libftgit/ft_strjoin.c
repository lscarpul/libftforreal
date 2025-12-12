/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscarpul <lscarpul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 13:55:45 by lscarpul          #+#    #+#             */
/*   Updated: 2025/12/12 14:35:30 by lscarpul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s);

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	l1;
	size_t	l2;
	char	*o;
	char	*p;

	if (!s1 || !s2)
		return (NULL);
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	o = (char *)malloc(l1 + l2 + 1);
	if (!o)
		return (NULL);
	p = o;
	while (*s1)
		*p++ = *s1++;
	while (*s2)
		*p++ = *s2++;
	*p = '\0';
	return (o);
}

// int	main(void)
// {
// 	const char	*a = "ciao ";
// 	const char	*b = "mondo";
// 	char		*r = ft_strjoin(a, b);
// 	if (!r)
// 		return (1);
// 	printf("'%s' + '%s' => '%s'\n", a, b, r);
// 	free(r);
// 	return (0);
// }