#include <stdio.h>

int main()
{
    int id,check_id;
    printf("Enter your check_id:");
    scanf("%d",&check_id);
    printf("Enter your id:");
    scanf("%d",&id);
    if(check_id == id)
    {
        printf("Successfully Entered!!!!!!");
    }
    else{
        printf("Invalid id!!!!!!");
    }
}
    