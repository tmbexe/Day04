/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmbexe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 12:42:20 by tmbexe            #+#    #+#             */
/*   Updated: 2020/06/25 13:00:57 by tmbexe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_putchar(const char c){
	write(1, &c,1);
}

int multiplyNumbers(int n) {
    if (n >= 1){
        return n*multiplyNumbers(n-1);
    }else{
        return 1;
    }
}

/*int main(){
	int n;
	
	ft_putchar('Enter a number: ');
	scanf("%d", n);
	ft_putchar('Factorial of %d = %d', n, multiplyNumbers(n));
	return 0;
}*/
