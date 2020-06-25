/* ************************************************************************** */
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

int ft_iterative_factorial(int nb) {
    if (nb >= 1){
        return nb*ft_iterative_factorial(nb-1);
    }else{
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
