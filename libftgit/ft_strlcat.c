/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscarpul <lscarpul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 22:05:58 by lscarpul          #+#    #+#             */
/*   Updated: 2025/12/03 22:29:30 by lscarpul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stddef.h>

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	src_len;
	size_t	dest_len;
	size_t	i;

	src_len = 0;
	dest_len = 0;
	i = 0;
	while (src[src_len])
		src_len++;
	if (size == 0)
		return (src_len);
	while (dest[dest_len] && dest_len < size)
		dest_len++;
	if (dest_len >= size)
		return (size + src_len);
	while (src[i] && (dest_len + i + 1) < size)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

/*int main(void)
{
    size_t ret;
    char str1[20] = "Hello";
    ret = ft_strlcat(str1, " World", sizeof(str1));
    printf("ret=%u, buf1=\"%s\"\n", ret, str1);
    char str2[6] = "Hello"; 
    ret = ft_strlcat(str2, " World", sizeof(str2));
    printf("ret=%u, buf2=\"%s\"\n", ret, str2);
    char str3[10] = "";
    ret = ft_strlcat(str3, "abc", 0); 
    printf("ret=%u, buf3=\"%s\"\n", ret, str3);
    char str4[10] = "12345";
    ret = ft_strlcat(str4, "", sizeof(str4)); 
    printf("ret=%u, buf4=\"%s\"\n", ret, str4);
    return 0;
}*/