/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 17:09:19 by mparasku          #+#    #+#             */
/*   Updated: 2022/12/27 17:12:54 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printflib.h"

int	ft_printstr (char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i += ft_printchar(str[i]);
	return (i);
}