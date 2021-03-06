/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 17:11:32 by yxie              #+#    #+#             */
/*   Updated: 2018/10/04 17:28:47 by yxie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *str)
{
	int num;
	
	if (*str)
	{
		num = *str - '0';
		str++;
		while (*str)
		{
			num = num * 10 + (*str - '0');
			str++;
		}
	}
	return (num);
}
