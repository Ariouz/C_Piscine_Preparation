#include <unistd.h>
#include "ft_print_comb2.h"

void ft_putchar(char a){
    write(1, &a, 1);
}

void ft_print_comb2(void)
{
	int a = 0;
    int b;

    while (a <= 99){
        b = a;
        while(b <= 99){
            if(a != b){
                ft_putchar(a/10+'0');
                ft_putchar(a%10+'0');
                ft_putchar(' ');
                ft_putchar(b/10+'0');
                ft_putchar(b%10+'0');
                if(a != 98){
                    write(1, ", ", 2);
                }
            }
            b++;
        }
        a++;
    }
}

int main(){
    ft_print_comb2();
    return 0;
}