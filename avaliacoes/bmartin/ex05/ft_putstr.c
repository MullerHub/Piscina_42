/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muda-sil <muda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 20:12:37 by brmartin          #+#    #+#             */
/*   Updated: 2025/04/01 21:44:31 by muda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char	*str);

void	ft_putstr(char	*str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
}
/*
int	main()
{
	char tst_str[8] = {'T', 'e', 's', 't', 'a', 'n', 'u', '\0'};
	ft_putstr(tst_str);
	return (0);
}
*/