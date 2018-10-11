/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 15:23:49 by yxie              #+#    #+#             */
/*   Updated: 2018/10/04 15:48:13 by yxie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	times;

	if (argc == 2)
	{
		while (*argv[1])
		{
			i = 0;
			if ((*argv[1] - 'a') >= 0 && (*argv[1] - 'a') <= ('z' - 'a'))
			{
				times = *argv[1] - 'a';
				while (i++ < times)
					write(1, argv[1], 1);
			}
			if ((*argv[1] - 'A') >= 0 && (*argv[1] - 'A') <= ('Z' - 'A'))
			{
				times = *argv[1] - 'A';
				while (i++ < times)
					write(1, argv[1], 1);
			}
			write(1, argv[1], 1);
			argv[1]++;
		}
	}
}
