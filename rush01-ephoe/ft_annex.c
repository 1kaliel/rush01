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
	int	*arr;
	char	row1[] = "4 3 2 1";
	char	row2[] = "2 4 1 3";
	char	row3[] = "3 1 4 2";
	char	row4[] = "1 2 3 4";

	arr = (int *)malloc(4 * sizeof(int));
	write(1, row1, 7 * sizeof(char));
	write(1, "\n", 1);
	write(1, row2, 7 * sizeof(char));
	write(1, "\n", 1);
	write(1, row3, 7 * sizeof(char));
	write(1, "\n", 1);
	write(1, row4, 7 * sizeof(char));
	free(arr);
	return (0);
}
