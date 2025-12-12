/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscarpul <lscarpul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 18:59:56 by lscarpul          #+#    #+#             */
/*   Updated: 2025/12/04 18:59:56 by lscarpul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char	*pos;
    unsigned char		cercato;
    size_t				i;

    pos = (const unsigned char *)s;
    cercato = (unsigned char)c;
    i = 0;
    while (i < n)
    {
        if (pos[i] == cercato)
            return ((void *)&pos[i]);
        i++;
    }
    return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
//     const char	str[] = "ciao a tutti";
//     int			c = 'y';
//     size_t		len = 12;
//     void		*res;
//     res = ft_memchr(str, c, len);
//     if (res)
//         printf("Found: %c at position %ld\n", *(char *)res, (char *)res - str);
//     else
//         printf("Not found\n");
//     return (0);
// }