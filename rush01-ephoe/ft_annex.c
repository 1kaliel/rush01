/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_annex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emalapra <emalapra@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 12:58:16 by emalapra          #+#    #+#             */
/*   Updated: 2024/07/20 12:59:29 by emalapra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	main(void)
{
	int	size;
	int	*p;

	p = (int*) malloc(4*sizeof(int));
	p[0] = '1';
	p[1] = '2';
	p[2] = '3';
	p[3] = '4';
	write(1, &p[0], sizeof(int));
	write(1, &p[1], sizeof(int));
	write(1, &p[2], sizeof(int));
	write(1, &p[3], sizeof(int));
	write(1, "\n", 1);
	free(p);

	
	return (0);
}
