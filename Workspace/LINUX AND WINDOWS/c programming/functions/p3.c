#include <stdio.h>
 int a = 1;
int main()
{
    static int a = 1;
    {
        //static int a = 2;
        {

            static int a = 2;
            {
                static int a=3;
                printf("%d\t",&a);
            }
            printf("%d\t",&a);
        }
        printf("%d\t",&a);
    }
     printf("%d\t",&a);

    
    
    
}