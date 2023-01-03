/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printflib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 14:56:01 by mparasku          #+#    #+#             */
/*   Updated: 2023/01/03 16:28:05 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTFLIB_H
# define PRINTFLIB_H

# include "../libft/libft.h"
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int	ft_printf(const char *str, ...);
int	ft_printchar(const char c);
int	ft_printstr(char *str);
int	ft_printper(void);
int	ft_printint(int n);
int	ft_printunsint(unsigned int n);
int	ft_printhex(unsigned int n, char format);

#endif