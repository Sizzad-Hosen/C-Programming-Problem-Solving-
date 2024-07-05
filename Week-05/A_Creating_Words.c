#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);


    for (int i = 0; i < t; i++)
    {
        char a1[4];
        char b1[4];
        scanf("%s %s", a1, b1);

        
        char temp = a1[0];
        a1[0] = b1[0];
        b1[0] = temp;

   
        printf("%s %s\n", a1, b1);
    }

    return 0;
}
