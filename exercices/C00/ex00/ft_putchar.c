#include <unistd.h>
#include "ft_putchar.h"

int main(){
    ft_putchar('a');
    return 0;
}

void ft_putchar(char a){
    write(1, &a, 1);
}

