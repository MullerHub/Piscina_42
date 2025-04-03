/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muda-sil <muda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 18:46:41 by hamorim-          #+#    #+#             */
/*   Updated: 2025/04/03 01:40:35 by muda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strstr(char	*str, char	*to_find)
{
	int	count;

	if (*str == *to_find && *str == '\0')
		return (str);
	count = 0;
	while (*str)
	{
		while (str[count] == to_find[count] && str[count] && to_find[count])
		{
			count++;
		}
		if (!to_find[count])
			return (str);
		count = 0;
		str++;
	}
	return (NULL);
}

 #include <stdio.h>
 #include <string.h>
 void run_strstr_test(char *palheiro, char *agulha)
 {
 	char *res_ft;
 	char *res_std;
 	int match;
 	res_ft = ft_strstr(palheiro, agulha);
 	res_std = strstr(palheiro, agulha);
 	match = (res_ft == res_std); // Compara os ponteiros retornados
 	printf("  palheiro=\"%s\", agulha=\"%s\"\n", palheiro, agulha);
 	printf("    ft_strstr: %s\n", res_ft ? res_ft : "NULL");
 	printf("    strstr:    %s\n", res_std ? res_std : "NULL");
 	printf("    Status:    %s\n", match ? "OK" : "FAIL");
 }
 void test_strstr(void)
 {
 	char str[] = "Aqui temos uma string de teste para teste";
 	printf("--- Testando ft_strstr ---\n");
 	run_strstr_test(str, "teste");     // Encontra no meio e no fim
 	run_strstr_test(str, "Aqui");      // Encontra no início
 	run_strstr_test(str, "para teste"); // Encontra no fim
 	run_strstr_test(str, "nao existe"); // Não encontra
 	run_strstr_test(str, "");          // agulha vazio
 	run_strstr_test("", "teste");      // palheiro vazio
 	run_strstr_test("", "");           // Ambos vazios
 	run_strstr_test("teste", "teste"); // Iguais
 	printf("------------------------\n\n");
 }
 int main(void)
 {
 	test_strstr();
 	return (0);
 }