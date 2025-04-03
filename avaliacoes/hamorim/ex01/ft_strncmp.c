/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamorim- <hamorim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 23:34:10 by hamorim-          #+#    #+#             */
/*   Updated: 2025/03/31 19:37:12 by hamorim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && (*s1 && (*s1 == *s2)))
	{
		s1++;
		s2++;
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

// #include <stdio.h>
// #include <string.h>
// int check_sign(int n1, int n2)
// {
// 	if ((n1 == 0 && n2 == 0) || (n1 > 0 && n2 > 0) || (n1 < 0 && n2 < 0))
// 		return (1); // Sinais ou zero coincidem
// 	return (0);     // Sinais ou zero diferem
// }
// void run_strncmp_test(char *s1, char *s2, unsigned int n)
// {
// 	int res_ft;
// 	int res_std;
// 	int match;
// 	res_ft = ft_strncmp(s1, s2, n);
// 	res_std = strncmp(s1, s2, n);
// 	match = check_sign(res_ft, res_std);
// 	printf("  s1=\"%s\", s2=\"%s\", n=%u\n", s1, s2, n);
// 	printf("    ft_strncmp: %d\n", res_ft);
// 	printf("    strncmp:    %d\n", res_std);
// 	printf("    Status:     %s\n", match ? "OK" : "FAIL");
// }
// void test_strncmp(void)
// {
// 	printf("--- Testando ft_strncmp ---\n");
// 	run_strncmp_test("abc", "abc", 3);
// 	run_strncmp_test("abc", "abc", 5); // n > len
// 	run_strncmp_test("abd", "abc", 3);
// 	run_strncmp_test("abc", "abd", 3);
// 	run_strncmp_test("abc", "abd", 2); // Igual até n=2
// 	run_strncmp_test("ab", "abc", 3);
// 	run_strncmp_test("abc", "ab", 3);
// 	run_strncmp_test("abc", "abc", 0); // n = 0
// 	run_strncmp_test("", "abc", 3);
// 	run_strncmp_test("abc", "", 3);
// 	run_strncmp_test("", "", 3);
// 	printf("--------------------------\n\n");
// }
// int main(void)
// {
// 	test_strncmp();
// 	return (0);
// }