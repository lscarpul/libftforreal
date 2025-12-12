/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscarpul <lscarpul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 14:51:25 by lscarpul          #+#    #+#             */
/*   Updated: 2025/12/04 18:43:46 by lscarpul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *d = (unsigned char *)dest;
    
    const unsigned char *s = (const unsigned char *)src;
    
    if (d > s && d < s + n) {
        d += n - 1;
        s += n - 1;
        while (n--) 
        {
            *d-- = *s--;
        }
    } else {
        while (n--) {
            *d++ = *s++;
        }
    }
    return dest;
}


/*int main(void)
{
    printf("=== TEST 1: Overlap 'Destinazione > Sorgente' ===\n");
    printf("(Questo è il caso difficile: bisogna copiare al contrario)\n");
    
    char str1[] = "1234567890";
    printf("Stringa iniziale: '%s'\n", str1);
    
    // Vogliamo spostare "12345" (5 char) in avanti di 2 posizioni (su str1 + 2)
    // Src: "12345..." (indice 0)
    // Dst: "..12345.." (indice 2)
    ft_memmove(str1 + 2, str1, 5);
    
    printf("Risultato atteso: '1212345890'\n");
    printf("Risultato tuo:    '%s'\n\n", str1);


    printf("=== TEST 2: Overlap 'Destinazione < Sorgente' ===\n");
    printf("(Questo è il caso facile: copia normale in avanti)\n");
    
    char str2[] = "1234567890";
    printf("Stringa iniziale: '%s'\n", str2);
    
    // Vogliamo spostare "67890" (da indice 5) indietro all'indice 2
    ft_memmove(str2 + 2, str2 + 5, 5);
    
    printf("Risultato atteso: '1267890890'\n");
    printf("Risultato tuo:    '%s'\n", str2);

    return 0;
}*/