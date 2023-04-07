/* 
#include <stdio.h>
#include <float.h>
#include <limits.h>

int main(void)
{
    int max_int = INT_MAX;
    float max_float = FLT_MAX;
    float small_float = 10.0 / 3;
    

    printf("The max int data is %d(overflow).\n", max_int + 1);
    printf("The max float data is %f(overflow).\n", max_float * 10);
    printf("The max precious bit of float data is %f.\n", small_float);
    printf("The max float data is %f.\n", max_float);
    printf("The max int data is %d.\n", INT_MAX);

    return 0;
}
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[20];

    printf("Please enter your name: ");
    scanf("%19s", name);
    printf("Print your name:\n");
    printf("a.\"%s\"\n", name);
    printf("b.\"%20s\"\n", name);
    printf("c.\"%-20s\"\n", name);
    printf("d.%*s\n", strlen(name) + 3, name);

    return 0;
}



