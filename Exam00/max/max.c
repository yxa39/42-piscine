/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 10:17:49 by yxie              #+#    #+#             */
/*   Updated: 2018/10/05 10:44:57 by yxie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int max(int *tab, unsigned int len)
{
	int i;
	int biggest;


	if (len > 0)
	{
		biggest = tab[0];
		i = 1;
		while (i < len)
		{
			if (tab[i] > biggest)
			{
				write(1, "X", 1);
				biggest = tab[i];
			}
			i++;
		}
		return (biggest);
	}
	return (0);
}


int main()
{
	int tab[] = {1,2,3,4,5,3,2,8};
	int maxnum;
	unsigned int len = 8;

	maxnum= max(tab, len);
	printf("%d", maxnum);
}
