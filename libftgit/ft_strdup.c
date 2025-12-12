/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscarpul <lscarpul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 20:54:44 by lscarpul          #+#    #+#             */
/*   Updated: 2025/12/08 14:24:22 by lscarpul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int ft_strlen(char *str)
{
int i;

i = 0;
while (str[i] != '\0')
{
i++;
}
return (i);
}

char *ft_strdup(const char *s)
{
    int len;
    char *s2;
    int i;
   
    i = 0;
   
    len = ft_strlen((char*)s);
    s2 = malloc(len + 1);
   
    if (!s2)
        return NULL;

    while (i < len)
    {
        s2[i] = s[i];
        i++;
    }
    s2[i] = '\0';
    return (s2);
}

// int main()
// {
//     char *s = "ciao";
//     char *copia1 = strdup(s);
//     char *copia = ft_strdup(s);
//     printf("%s\n", s);
//     printf("%s\n", copia);
//     printf("%s\n", copia1);
//     free(copia);
// }