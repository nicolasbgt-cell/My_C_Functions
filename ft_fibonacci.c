/* ************************************************************************** */
/*																		      */
/* ft_fibonacci.c                                       /\				      */
/*													   /  \                   */
/* By: nicolasbgt-cell                        		  /____\                  */
/* 													  \    /                  */
/* Created: 2026/04/07 18:15               		  	   \  /			          */
/* Updated: 2026/04/07                        	        \/	   			      */
/* 																		      */
/* ************************************************************************** */
#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
