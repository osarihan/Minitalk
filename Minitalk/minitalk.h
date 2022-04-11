/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarihan <osarihan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:29:49 by osarihan          #+#    #+#             */
/*   Updated: 2022/04/11 17:34:51 by osarihan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	MINITALK_H
#define	MINITALK_H
# define PIDERROR "errorpid"
# define ARGERROR "errorarg"

# include <unistd.h>
# include <stdlib.h>
# include <signal.h>
# include <limits.h>

char	*ft_itoa(int n);
void	ft_putstr (char *str);
int		ft_atoi(const char *str);
int		ft_isdigit(int c);
int		ft_strlen (const char *str);
char	*ft_strjoin(char *s1, char const s2);
char	*ft_strdup(const char *s1);

#endif