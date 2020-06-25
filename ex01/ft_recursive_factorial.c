#include <stdio.h>
#include <unistd.h>

int ft_recursive_factorial(int nb) {
	    if (nb >= 1){
		return nb * ft_recursive_factorial(nb - 1);
	    }else{
		return 0;
		 }
}

/*int main() {
	int nb;

	("Enter a positive integer: ");
	scanf("%d",&nb);
	("Factorial of %d = %ld", nb, ft_recursive_factorial(nb));
	return 0;
}*/
