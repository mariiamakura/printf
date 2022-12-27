/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 17:44:20 by mparasku          #+#    #+#             */
/*   Updated: 2022/12/27 18:24:40 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printflib.h"

int 	ft_printint(int n)
{
	int	total;
	char	*str; 

	total = 0;
	str = ft_itoa(n);
	total += ft_printstr(str);
	free(str);
	return (total);
	
}

/* int main ()
{
	int a = -2147483648;
	ft_printint(a);
} */