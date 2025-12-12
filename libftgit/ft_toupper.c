/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscarpul <lscarpul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 17:28:38 by lscarpul          #+#    #+#             */
/*   Updated: 2025/12/12 13:58:05 by lscarpul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>


int ft_toupper(int c)
{
	unsigned char temp;
	temp = c;
	
	if (temp >= 'a' && temp <= 'z')
	{
		temp -= 32;
	}
			return (temp);
}
// int main()
// {
// 	char c;
// 	c = 'a';
// 	printf("%c", ft_toupper(c));
// }
