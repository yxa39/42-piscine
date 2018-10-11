/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 10:45:45 by yxie              #+#    #+#             */
/*   Updated: 2018/10/05 11:26:41 by yxie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int bool;
	int i;
	
	i = 0;
	bool = 1;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			while (argv[1][i] != *argv[2])
			{
				argv[2]++;
				if (*argv[2] == '\0')
				{
					bool = 0;
					break;
				}
			}
			argv[2]++;
			i++;
		}
		if (bool == 1)
		{
			while(*argv[1])
			{
				write(1, argv[1],1);
				argv[1]++;
			}
		}
	}
//	write(1, &argv[1][1],1);
	write(1, "\n", 1);
}
