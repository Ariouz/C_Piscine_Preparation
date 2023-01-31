#include <unistd.h>
#include "ft_print_combn.h"

void ft_putchar(char a){
    write(1, &a, 1);
}

void ft_print_combn(int n){
    if(n <= 0 || n > 10){
        return;
    }

    int a = '0';
    while(a <= '9'){
        int i = 0;
        while(i < n){
            ft_putchar(a);
            i++;
        }
        a++;
    }
}

int main(){
    ft_print_combn(2);
    return 0;
}