/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmbexe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 12:42:20 by tmbexe            #+#    #+#             */
/*   Updated: 2020/06/25 13:07:06 by tmbexe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_iterative_factorial(int nb){
	int n;
	int factorial
	nb = 1;

	if(nb <= n){
		factorial = factorial * nb;
		++nb;
	}else if(n < 0){
		return 0;
	}
}



/*int main(){
	int nb;	
	ft_putchar('Enter a number: ');
	scanf("%d", nb);
	ft_putchar('Factorial of %d = %d', nb, ft_iterative_factorial(nb));
	return 0;
}*/
