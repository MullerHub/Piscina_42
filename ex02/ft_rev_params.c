/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muda-sil <muda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 20:28:34 by muda-sil          #+#    #+#             */
/*   Updated: 2025/04/03 00:20:37 by muda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_rev_params(char *charutovisk)
{
	int	i;

	i = 0;
	while (charutovisk[i] != '\0')
	{
		write(1, &charutovisk[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[] )
{
	int	i;

	i = argc - 1;
	while (i > 0)
	{
		ft_rev_params(argv[i]);
		i--;
	}
	return (0);
}
