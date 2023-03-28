/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaint-p <tsaint-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:16:20 by tsaint-p          #+#    #+#             */
/*   Updated: 2023/03/21 15:16:20 by tsaint-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

int		ft_isalnum(char character);
int		ft_isalpha(char character);
int		ft_isascii(char character);
int		ft_isdigit(char character);
int		ft_isprint(char character);
int		ft_strlen(char *string);
void	*ft_memset(void *pointer, int value, size_t count);
void	ft_bzero(void *s, size_t n);

#endif