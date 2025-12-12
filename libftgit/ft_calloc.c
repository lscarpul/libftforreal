/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscarpul <lscarpul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 10:23:11 by lscarpul          #+#    #+#             */
/*   Updated: 2025/12/08 13:54:28 by lscarpul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
    size_t			totale;
    unsigned char	*puntatore;
    size_t			i;

    if (count != 0 && size > (size_t)-1 / count)
        return (NULL);
    totale = count * size;
    puntatore = (unsigned char *)malloc(totale);
    if (!puntatore)
        return (NULL);
    i = 0;
    while (i < totale)
        puntatore[i++] = 0;
    return ((void *)puntatore);
}

// int main()
// {
//     int *arr;
//     size_t n = 5;
//     int *prova;
//     arr = (int *)ft_calloc(n, sizeof(int));
//     if (arr)
//     {
//         for (size_t i = 0; i < n; i++)
//             printf("%d ", arr[i]);
//         printf("\n quello vero");
//         free(arr);
//     }
//     arr = (int *)calloc(n, sizeof(int));
//      if (arr)
//     {
//         for (size_t i = 0; i < n; i++)
//             printf("%d ", arr[i]);
//         printf("\n");
//         free(arr);
//     }
//     return 0;
// }