
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct{
    int a;
    char b;
    int c;
    
}t={10,'C',20};

int main(){
    printf("Size of t: %d\n",sizeof(t));
    printf("&a: %X\n&b: %X\n&c: %X\n", &t.a, &t.b, &t.c);
    system("pause");
    return 0;
}
