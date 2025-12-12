/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscarpul <lscarpul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 17:28:43 by lscarpul          #+#    #+#             */
/*   Updated: 2025/12/04 18:53:13 by lscarpul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int ft_tolower(int c)
{
	unsigned char temp;
	temp = c;
	
	if (temp >= 'A' && temp <= 'B')
	{
		temp += 32;
	}
	return (temp);
}
// int main ()
// {
// 	char c;
// 	c = 'B';
// 	printf("%c", ft_tolower(c));
// }
