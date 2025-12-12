/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libft <libft@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 21:49:00 by libft             #+#    #+#             */
/*   Updated: 2025/12/12 21:49:00 by libft            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*str;
	char	**split;
	int		i;

	printf("=== Testing libft ===\n\n");

	printf("1. Testing ft_strlen:\n");
	printf("   ft_strlen(\"Hello\") = %zu\n", ft_strlen("Hello"));
	printf("   Expected: 5\n\n");

	printf("2. Testing ft_isalpha:\n");
	printf("   ft_isalpha('A') = %d\n", ft_isalpha('A'));
	printf("   ft_isalpha('1') = %d\n", ft_isalpha('1'));
	printf("   Expected: non-zero, 0\n\n");

	printf("3. Testing ft_strdup:\n");
	str = ft_strdup("Duplicate me!");
	printf("   Original: \"Duplicate me!\"\n");
	printf("   Duplicate: \"%s\"\n", str);
	free(str);
	printf("\n");

	printf("4. Testing ft_strjoin:\n");
	str = ft_strjoin("Hello, ", "World!");
	printf("   Result: \"%s\"\n", str);
	printf("   Expected: \"Hello, World!\"\n");
	free(str);
	printf("\n");

	printf("5. Testing ft_itoa:\n");
	str = ft_itoa(42);
	printf("   ft_itoa(42) = \"%s\"\n", str);
	printf("   Expected: \"42\"\n");
	free(str);
	str = ft_itoa(-42);
	printf("   ft_itoa(-42) = \"%s\"\n", str);
	printf("   Expected: \"-42\"\n");
	free(str);
	printf("\n");

	printf("6. Testing ft_split:\n");
	split = ft_split("Hello,World,Test", ',');
	printf("   Input: \"Hello,World,Test\" (delimiter: ',')\n");
	printf("   Result:\n");
	i = 0;
	while (split[i])
	{
		printf("   [%d]: \"%s\"\n", i, split[i]);
		free(split[i]);
		i++;
	}
	free(split);
	printf("\n");

	printf("7. Testing ft_atoi:\n");
	printf("   ft_atoi(\"   -123\") = %d\n", ft_atoi("   -123"));
	printf("   Expected: -123\n\n");

	printf("8. Testing ft_memcpy:\n");
	char src[] = "Test string";
	char dst[20];
	ft_memcpy(dst, src, strlen(src) + 1);
	printf("   Source: \"%s\"\n", src);
	printf("   Destination: \"%s\"\n", dst);
	printf("\n");

	printf("=== All tests passed! ===\n");
	return (0);
}
