#include<stdio.h>
#include<string.h>

int main()
{
    char Arr[] = "Hello";
    char Brr[] = {'H','e','l','l','o','\0'};

    printf("%s\n",Arr);
    printf("%s\n",Brr);

    printf("%d\n",strlen(Arr));
    printf("%d\n",strlen(Brr));

    return 0;
}