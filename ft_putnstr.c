/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 16:53:49 by fhong             #+#    #+#             */
/*   Updated: 2018/07/02 17:47:02 by fhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnstr(char const *str, size_t size)
{
	size_t i;

	i = 0;
	while (str[i] && i < size)
		write(1, &str[i++], 1);
}
