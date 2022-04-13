/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarihan <osarihan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 12:01:29 by osarihan          #+#    #+#             */
/*   Updated: 2022/04/12 12:47:25 by osarihan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strdup(const char *str)
{
	int		len;
	int		i;
	char	*mlc;

	i = 0;
	len = 0;
	len = ft_strlen(str);
	mlc = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		mlc[i] = str[i];
		i++;
	}
	mlc[i] = '\0';
	return (mlc);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
