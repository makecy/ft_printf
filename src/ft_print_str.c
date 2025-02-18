/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstefano <mstefano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:26:01 by mstefano          #+#    #+#             */
/*   Updated: 2025/02/18 16:02:30 by mstefano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

size_t	ft_strlen(const char *s)
{
	int	count;

	count = 0;
	while (s[count])
	{
		count++;
	}
	return (count);
}

int	ft_print_str(char *str)
{
	int	len;

	len = 0;
	if (str == NULL)
	{
		len = write(1, "(null)", 6);
		if (len < 0)
			return (-1);
		return (len);
	}
	else
		len = (write(1, str, ft_strlen(str)));
	if (len < 0)
		return (-1);
	return (len);
}
