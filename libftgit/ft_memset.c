/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscarpul <lscarpul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 16:54:20 by lscarpul          #+#    #+#             */
/*   Updated: 2025/12/04 18:52:40 by lscarpul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_memset(void *s, int c, size_t n)
{
	unsigned char *d;
	d = s;
	
	unsigned char temp;
	temp = c;
	
	while (n != 0)
	{
		*d = temp;
		d++;
		n--;
	}
	
}
// int main(void)
// {
//     char str[20] = "Hello, world!";
//     printf("Prima:  %s\n", str);
//     ft_memset(str+2, '*', 5);  
//     printf("Dopo:   %s\n", str);
//     return 0;
// }
