/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamorim- <hamorim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 15:52:00 by root              #+#    #+#             */
/*   Updated: 2025/03/31 19:38:20 by hamorim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*head;

	head = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (head);
}

// #include <stdio.h>
// #include <string.h>
// void run_strcat_test(const char *initial_dest, const char *src)
// {
// 	char dest_ft[100]; // Buffer para ft_strcat
// 	char dest_std[100]; // Buffer para strcat
// 	char *ret_ft;
// 	char *ret_std;
// 	int match_ret;
// 	int match_str;
// 	strcpy(dest_ft, initial_dest); // Prepara buffers
// 	strcpy(dest_std, initial_dest);
// 	ret_ft = ft_strcat(dest_ft, (char *)src); // Cast para char* necessário
// 	ret_std = strcat(dest_std, src);
// 	match_ret = (ret_ft == dest_ft); 
// 	match_str = (strcmp(dest_ft, dest_std) == 0);
// 	printf("  dest=\"%s\", src=\"%s\"\n", initial_dest, src);
// 	printf("    ft_strcat result: \"%s\" (retorna dest? %s)
// \n", dest_ft, match_ret ? "Sim" : "Nao");
// 	printf("    strcat result:    \"%s\"\n", dest_std);
// 	printf("    Status:           %s\n", 
// match_str && match_ret ? "OK" : "FAIL");
// }
// void test_strcat(void)
// {
// 	printf("--- Testando ft_strcat ---\n");
// 	run_strcat_test("Hello ", "World!");
// 	run_strcat_test("Start", "");       // Concatenar string vazia
// 	run_strcat_test("", "Append");      // Concatenar a uma string vazia
// 	run_strcat_test("abc", "def");
// 	printf("------------------------\n\n");
// }
// int main(void)
// {
// 	test_strcat();
// 	return (0);
// }