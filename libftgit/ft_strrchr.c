/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscarpul <lscarpul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 17:27:23 by lscarpul          #+#    #+#             */
/*   Updated: 2025/12/04 18:53:08 by lscarpul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

 char *ft_strrchr(const char *s, int c)
 {
 	unsigned char temp;
 	temp = (unsigned char)c;
 	
 	const char *last = NULL;
 	
 	while (*s)
 	{
 		if (*s == temp)
 		{
 			last = s;
 		}
 	s++;
 	}
 	if (temp == '\0')
 	return ((char*)s);
 	return ((char *)last);
 	
 }
//  int main ()
//  {
// 	char str[] = "ciao a tutti";
// 	char trova = 'a';
// 	printf("%s", ft_strrchr(str, trova));
// 	return (0);
//  }
