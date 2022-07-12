#include<stdio.h>
#include<stdlib.h>
int my_atoi(const char *buf){
    int sum = 0;
    while ((*buf != '\0') && (*buf >= '0' && *buf <='9') && (sum = sum * 10 + (*buf++ - '0')));
    return sum;
}
int main(int argc, char const *argv[])
{
    printf("%d\n",atoi("123"));
    printf("%d\n",my_atoi("123"));
    return 0;
}
