/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscarpul <lscarpul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 22:06:04 by lscarpul          #+#    #+#             */
/*   Updated: 2025/11/03 21:29:01 by lscarpul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

// int main ()
// {
// 	char s1[] = "ABA";
// 	char s2[] = "ABZ";
// 	unsigned int n = 100;
// 	int result;
// 	result = ft_strncmp (s1, s2, n);
// 	printf("risultato: %d", result);
// 	return 0;
// }
