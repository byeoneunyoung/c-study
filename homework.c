#include <stdio.h>
int main(void)
{
        int a, b, c = 0;
        int mid = 0;
        printf("정수를 입력하세요>>");
        scanf("%d" "%d" "%d", &a, &b, &c);
        if (a > b);
        {
                if(b > c);
                mid = b;
                if(a < c);
                mid = a;
                if(a > c && c > b);
                mid = c;
        }
        if (b > a);
        {
                if(a > c);
                mid = a;
                if(b > c);
                mid = c;
                if(c > b && b > a);
                mid = b;
        }
        printf("%d", mid);
        return 0;
}
