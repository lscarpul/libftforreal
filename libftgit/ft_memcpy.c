/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscarpul <lscarpul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 14:44:57 by lscarpul          #+#    #+#             */
/*   Updated: 2025/12/04 19:40:12 by lscarpul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n) 
{
    char *d = (char *)dest;
    
    char *s = (char *)src;
    
    while (n--) 
    {
        *d = *s;
        d++;
        s++;
    }
    return ((void*)dest);
}

// int main() {
//     char origine[] = "Ciao!";
//     char destinazione[50];
//     ft_memcpy(destinazione, origine, 6);
//     printf("Destinazione: %s\n", destinazione);
// }   