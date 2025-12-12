/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscarpul <lscarpul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 15:24:03 by lscarpul          #+#    #+#             */
/*   Updated: 2025/12/06 14:28:08 by lscarpul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <unistd.h>

void	ft_bzero(void *s, size_t n)
{
    unsigned char	*p;

    p = (unsigned char *)s;
    while (n > 0)
    {
        *p = '\0';
        p++;
        n--;
    }
}

// int main(void)
// {
//     char str[] = "hello world";
//     printf("before: %s\n", str);
//     ft_bzero(str, 6); 
//     printf("after : %s\n", str); 
//     for (size_t i = 0; i < sizeof(str); ++i)
//         printf("%02x ", (unsigned char)str[i]);
//     printf("\n");
//     return (0);
// }
