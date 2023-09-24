#include<stdio.h>
#include<assert.h>
void*my_memset(void*dest,int c,size_t count)
{
    assert(dest!=NULL && count>=0);
    char*p=(char*)dest;
    unsigned int i=0;
    while(i<count)
    {
        p[i++]=c;
    }
    return(void*)p;
}
int main(void){
    int i;
    char str[10];
    char*p=str;
    my_memset(str,0,sizeof(str));
    for(i=0;i<10;i++){
        printf("%d\x20",str[i]);
    }
    printf("\n");
    return 0;
}

