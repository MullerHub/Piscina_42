/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgareti- <rgareti-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 08:07:05 by rgareti-          #+#    #+#             */
/*   Updated: 2025/03/31 21:29:10 by rgareti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	j;

	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str)
	{
		j = 0;
		while (str[j] == to_find[j] && to_find[j] != '\0')
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
			return (str);
		}
		str++;
	}
	return (0);
}

// int	main(void)
// {
// 	char		str[] = "oi, tudo bom com voce?";
// 	char		to_find[] = "";
// 	char		*result;

// 	result = ft_strstr(str, to_find);
// 	if (result != NULL)
// 	{
// 		printf("Substring encontrada: %s\n", result);
// 	}
// 	else
// 	{
// 		printf("Substring não encontrada.\n");
// 	}
// 	return (0);
// }
