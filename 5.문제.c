#include <stdio.h>

int discount_price();
int price;
int a,b,c;

int main()
{
    
    printf("������?\n");
    scanf("%d", &a);
    printf("�������� %d �Դϴ�.\n", a); 
    
    printf("��ǰ�� ����?\n");
    scanf("%d", &b);
    printf("��ǰ�� ������ %d �Դϴ�.\n", b);
    
    price = discount_price(a,b);
    
    
    printf("���ε� ������ %d �Դϴ�.", price);
    
   
}

int discount_price(int a, int b)
{
    int price;
    
    price = b-(a * b / 100);

    return price;
} 
