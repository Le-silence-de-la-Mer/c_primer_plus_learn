#include <stdio.h>
#include <string.h>
#include <float.h>
#include <limits.h>

int main(int argc,char** argv)
{
    int max_int = INT_MAX;
    float max_float = FLT_MAX;
    float small_float = 10.0/3;
     
     printf("the ... is %d(overflow).\n", max_int + 1);
     printf("the .. is %f(overflow).\n", max_float * 10);
     printf("the .. is %f.\n",small_float);
     printf("the .. is %d.\n",INT_MAX);

    return 0;
}
