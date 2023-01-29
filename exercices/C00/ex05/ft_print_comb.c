#include <unistd.h>
#include "ft_print_comb.h"

void ft_print_comb(){
    
    char a = '0';
    char b;
    char c;

    while(a <= '7'){
        b = a;

        while(b <= '8'){
            c = b;

            while(c <= '9'){
                if(a != b && b != c && a != c){
                    ft_show_numbers(a, b, c);
                }
                c++;
            }
            b++;
        }
        a++;
    }
}

void ft_show_numbers(int a, int b, int c){
    write(1, &a, 1);
    write(1, &b, 1);
    write(1, &c, 1);
    
    if(!(a=='7' && b == '8' && c == '9')){
        write(1, ", ", 1);
    }
}

int main(){
    ft_print_comb();
    return 0;
}