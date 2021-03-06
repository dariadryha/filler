/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number_word.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddryha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 21:03:46 by ddryha            #+#    #+#             */
/*   Updated: 2017/11/14 21:03:46 by ddryha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_numword(const char *str, char c)
{
	int n;

	n = 1;
	if (!str)
		return (0);
	while (*str != '\0')
	{
		if (*str != c && (*(str + 1) == c || *(str + 1) == '\0'))
			n++;
		str++;
	}
	return (n);
}
