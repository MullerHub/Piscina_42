/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_cases.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muda-sil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 15:33:09 by muda-sil          #+#    #+#             */
/*   Updated: 2025/03/28 19:20:00 by muda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*swap_cases(char *str);

char    *swap_cases(char *str)
{
	int	i;
	char *temp = str;

	while (*str)
	{
		if(*str >= 65 && *str <=90)
		{
			*str += 32;
		}
		else if (*str >= 97 && *str <=122)
		{
			*str -= 32;
		}
		//i++;
		str++;	
	}
	return temp;
	
}

int main()
{
    char texto[] = "exemplo GRANDE 123!";
    printf("Resultado: %s\n", swap_cases(texto));
    return 0;
}
