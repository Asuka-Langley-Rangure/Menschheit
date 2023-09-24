#include<stdio.h>
#include<assert.h>
int Strlen(const char*p)
{
    assert(p!=NULL);
    int count=0;
    while (*p!='\0')
    {
        count++;
        p++;
    }
    return count;
}

int main()
{
    char arr[]="abcdefg";
    int num=Strlen(arr);
    printf("字符串的长度为：%d\n",num);
    return 0;
}