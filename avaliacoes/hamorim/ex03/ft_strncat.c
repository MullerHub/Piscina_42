/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muda-sil <muda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 16:23:40 by root              #+#    #+#             */
/*   Updated: 2025/04/03 01:36:56 by muda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*head;
	unsigned int	i;

	i = 0;
	head = dest;
	while (*dest)
	{
		dest++;
	}
	while (i < nb && *src)
	{
		*dest = *src;
		i++;
		src++;
		dest++;
	}
	*dest = '\0';
	return (head);
}

// #include <stdio.h>
// #include <string.h>
// void run_strncat_test(const char *initial_dest,
//  const char *src, unsigned int n)
// {
// 	char dest_ft[100];
// 	char dest_std[100];
// 	char *ret_ft;
// 	char *ret_std;
// 	int match_ret;
// 	int match_str;
// 	strcpy(dest_ft, initial_dest);
// 	strcpy(dest_std, initial_dest);
// 	ret_ft = ft_strncat(dest_ft, (char *)src, n);
// 	ret_std = strncat(dest_std, src, n);
// 	match_ret = (ret_ft == dest_ft);
// 	match_str = (strcmp(dest_ft, dest_std) == 0);
// 	printf("  dest=\"%s\", src=\"%s\", n=%u\n", initial_dest, src, n);
// 	printf("    ft_strncat result: \"%s\" (retorna dest? %s)
// \n", dest_ft, match_ret ? "Sim" : "Nao");
// 	printf("    strncat result:    \"%s\"\n", dest_std);
// 	printf("    Status:            %s\n", match_str 
// && match_ret ? "OK" : "FAIL");
// }
// void test_strncat(void)
// {
// 	printf("--- Testando ft_strncat ---\n");
// 	run_strncat_test("Hello ", "World!", 3);      // n < len(src)
// 	run_strncat_test("Hello ", "World!", 10);     // n > len(src)
// 	run_strncat_test("Start", "End", 0);          // n = 0
// 	run_strncat_test("Test", "", 5);              // src vazio
// 	run_strncat_test("", "Append", 4);            // dest vazio
// 	run_strncat_test("abc", "defghijkl", 5);
// 	printf("-------------------------\n\n");
// }
// int main(void)
// {
// 	test_strncat();
// 	return (0);
// }