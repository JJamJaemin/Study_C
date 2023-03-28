#include <stdio.h>

int discount_price();
int price;
int a,b,c;

int main()
{
    
    printf("할인율?\n");
    scanf("%d", &a);
    printf("할인율은 %d 입니다.\n", a); 
    
    printf("제품의 가격?\n");
    scanf("%d", &b);
    printf("제품의 가격은 %d 입니다.\n", b);
    
    price = discount_price(a,b);
    
    
    printf("할인된 가격은 %d 입니다.", price);
    
   
}

int discount_price(int a, int b)
{
    int price;
    
    price = b-(a * b / 100);

    return price;
} 
