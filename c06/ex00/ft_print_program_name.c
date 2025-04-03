/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muda-sil <muda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 20:26:45 by muda-sil          #+#    #+#             */
/*   Updated: 2025/04/03 02:31:31 by muda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_program_name(char *program_name)
{
	int	i;

	i = 0;
	while (program_name[i] != '\0' )
	{
		write(1, &program_name[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	if (argc >= 1)
		ft_print_program_name(argv[0]);
}
