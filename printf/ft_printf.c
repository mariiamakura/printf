/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 14:58:57 by mparasku          #+#    #+#             */
/*   Updated: 2022/12/27 18:25:08 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printflib.h"

int	ft_format(va_list ap, const char c)
{
	int total;

	total = 0;
	if (c == 'c')
		total += ft_printchar(va_arg(ap, int));
	else if (c == 's')
		total += ft_printstr(va_arg(ap, char *));
	else if (c == '%')
		total += ft_printper();
	else if (c == 'i')
		total += ft_printint(va_arg(ap, int));
	return (total);
}

int ft_printf(const char *str, ...)
{
	va_list	ap;
	int	i;
	int	total;

	i = 0;
	total = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%' && ft_strchr("cspdiuxX%", str[i + 1]))
			{
				total += ft_format(ap, str[i + 1]);
				i++;
			}
		else
			total += ft_printchar(str[i]);
		i++;
	}
	va_end(ap);
	return (total);
}

int main()
{
	char a = 'Z';
	char b[] = "Masha";
	int num = -123;
	int total;
	printf(" %i\n", ft_printf("Hello how %c you %s %% %i", a, b, num));
}