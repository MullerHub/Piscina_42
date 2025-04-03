/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muda-sil <muda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 19:17:20 by dasimoes          #+#    #+#             */
/*   Updated: 2025/03/31 23:50:42 by muda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);
int		ft_check(char *base);
void	ft_putnbr(long nbr, int basenum, char *base);

int	main(void)
{
	char	base1[] = "012345678"; // base nonária 42 = 46
	char	base2[] = "01"; // base binária 42 = 101010
	char	base3[] = "0123456789ABCDEF"; // base hexadecimal 42 = 2A
	char	base4[] = "poneyvif"; // base octal 42 = vn

	ft_putnbr_base(42, base1);
	write(1, "\n", 1);
	ft_putnbr_base(42, base2);
	write(1, "\n", 1);
	ft_putnbr_base(42, base3);
	write(1, "\n", 1);
	ft_putnbr_base(42, base4);
	write(1, "\n", 1);
	ft_putnbr_base(INT_MIN, base3);
	write(1, "\n", 1);
	ft_putnbr_base(INT_MAX, base3);
	write(1, "\n", 1);

	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	basenum;

	basenum = 0;
	if (!ft_check(base))
		return;
	while (base[basenum])
		basenum++;
	ft_putnbr((long) nbr, basenum, base);
}

void	ft_putnbr(long nbr, int basenum, char *base)
{	
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr > basenum - 1)
		ft_putnbr(nbr / basenum, basenum, base);
	write(1, &base[nbr % basenum], 1);
}

int	ft_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (!base || !base[0] || !base[1])
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
