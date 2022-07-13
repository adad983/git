
#include<stdio.h>
#include<string.h>
char *my_strcpy(char *des,const char *buf){
    char *p = des;
    while (*des++ = *buf++);
    return p;
}

int main(int argc, char const *argv[])
{
    char buf[] = "abcde";
    char des[100] = "0";
    printf("%s\n",my_strcpy(des,buf));
    printf("%s\n",des);
    return 0;
}