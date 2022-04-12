/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarihan <osarihan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:26:40 by osarihan          #+#    #+#             */
/*   Updated: 2022/04/12 11:42:13 by osarihan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	binarytodecimal(char *bits)
{
	int				base;
	unsigned char	num;
	int				i;

	num = 0;
	i = 0;
	base = 128;
	while (bits[i])
	{
		num += base * (bits[i] - '0');
		base /= 2;
		i++;
	}
	write(1, &num, 1);
}

void	ft_signal(int signal)
{
	static int	contador;
	static char	*bits;

	contador++;
	if (bits == NULL)
	{
		bits = ft_strdup("");
		contador = 1;
	}
	if (signal == SIGUSR1)
		bits = ft_strjoin(bits, '0');
	else
		bits = ft_strjoin(bits, '1');
	if (contador == 8)
	{
		binarytodecimal(bits);
		free(bits);
		bits = NULL;
	}
}

int	main(void)
{
	int		pid;
	char	*pidstr;

	pid = 0;
	pid = getpid();
	ft_putstr("PID: ");
	pidstr = ft_itoa(pid);
	ft_putstr(pidstr);
	write(1, "\n", 1);
	while (1)
	{
		signal(SIGUSR1, ft_signal);
		signal(SIGUSR1, ft_signal);
		pause();
	}
	return (0);
}
