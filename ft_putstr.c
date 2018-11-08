/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oshyiata <oshyiata@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 13:21:49 by oshyiata          #+#    #+#             */
/*   Updated: 2018/11/08 13:25:57 by oshyiata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *s)
{
	size_t i;

	i = 0;
	if (s && *s)
		while (s[i])
			ft_putchar(s[i++]);
}
