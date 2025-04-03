/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muda-sil <muda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 14:45:05 by root              #+#    #+#             */
/*   Updated: 2025/04/03 01:33:48 by muda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

 #include <stdio.h>
 #include <string.h>
 int check_sign(int n1, int n2)
 {
 	if ((n1 == 0 && n2 == 0) || (n1 > 0 && n2 > 0) || (n1 < 0 && n2 < 0))
 		return (1); 
 	return (0);  
 }
 void run_strcmp_test(char *s1, char *s2)
 {
 	int res_ft;
 	int res_std;
 	int match;
 	res_ft = ft_strcmp(s1, s2);
 	res_std = strcmp(s1, s2);
 	match = check_sign(res_ft, res_std);
 	printf("  s1=\"%s\", s2=\"%s\"\n", s1, s2);
 	printf("    ft_strcmp: %d\n", res_ft);
 	printf("    strcmp:    %d\n", res_std);
 	printf("    Status:    %s\n", match ? "OK" : "FAIL");
 }
 void test_strcmp(void)
 {
 	printf("--- Testando ft_strcmp ---\n");
 	run_strcmp_test("abc", "abc");
 	run_strcmp_test("abd", "abc");
 	run_strcmp_test("abc", "abd");
 	run_strcmp_test("", "abc");
 	run_strcmp_test("abc", "");
 	run_strcmp_test("", "");
 	run_strcmp_test("Test\200", "Test\0");
 	printf("-------------------------\n\n");
 }
 int main(void)
 {
 	test_strcmp();
 	return (0);
 }