
#include<stdio.h>
#include<string.h>
int my_strlen(const char *buf){
    int size = 0;
    while ((*buf++ != '\0') && size++);
    return size;
}

int main(int argc, char const *argv[])
{
    char buf[] = "a";
    char des[100] = {'a'};
    printf("%d\n",my_strlen(des));
    printf("%d\n",strlen(des));
    printf("%d\n",my_strlen(buf));
    printf("%d\n",strlen(buf));
    return 0;
}