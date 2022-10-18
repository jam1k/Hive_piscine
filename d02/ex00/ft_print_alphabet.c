/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 14:23:08 by jshestov          #+#    #+#             */
/*   Updated: 2022/06/30 17:44:47 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	int		index;

	char	alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	index = 0;
	while (alphabet[index] != '\0' )
	{
		ft_putchar(alphabet[index]);
		index++;
	}
}

int main()
{
	ft_print_alphabet();
	return 0;
}
