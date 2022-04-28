#include <stdio.h>

int main() 
{
    
    int a,b,c,d;
    scanf("%d %d, &a, &b");
    c = a + b;
    d = a - b;
    printf("%d\n", c);
    printf("%d", d);
    
    
    float w,x,y,z;
    scanf("%f %f", &x, &y);
    w = x / y;
    z = x * y;
    printf("%.2f\n", w);
    printf("%.2f", z);
    
    
    int x;
    printf("Enter an integer: ");
    scanf("%d", &x);
    printf("Double the given value is %d", x*2);
    
    
    float y;
    printf("Enter a value: ");
    scanf("%f", &y);
    printf("Square of the value is %.2f", y*y);
    

    char c[100];
    printf("Enter character: ");
    scanf("%c",&c);
    printf("Character is: %c\n", c);
    
    
    int u,v;
    u = 7;
    v = ++u;
    printf("The final values are: %d %d", u, v);
    
    
    int a,b;
    a = (b = 4, b * 4);
    printf("a = %d\nb = %d\n", a, b);
    
    
    unsigned char a = 5, b = 9; 
    printf("a<<1 = %d\n", a<<1);
    printf("b<<1 = %d\n", b<<1);
    
    
    int a = 4; 
    int b = 7;
    printf("Output is: %d", a|b);
    
    return 0;
}