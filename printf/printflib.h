/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printflib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 14:56:01 by mparasku          #+#    #+#             */
/*   Updated: 2022/12/27 17:48:28 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTFLIN_H
# define PRINTFLIN_H

# include "../libft/libft.h"
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int	ft_printchar(const char c);
int	ft_printstr (char *str);
int	ft_printper();
int 	ft_printint(int n);

#endif