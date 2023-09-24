#include<stdio.h>
#include<assert.h>
void my_memcpy(void*dest,const void*sou, size_t num)
{
    assert(dest!=NULL && sou!=NULL);
    void*ret=dest;
    while(num--)
    {
        *(char*)dest=*(char*)sou;
        dest=(char*)dest+1;
        sou=(char*)sou+1;

    }
    return ret;
}

int main(){
char buf1[]="hello";
char buf2[]="world";
char buf[30];
char buf1_len=strlen(buf1);
char buf2_len=strlen(buf2);
my_memcpy(buf,buf1,buf1_len);
buf[buf1_len]=' ';
my_memcpy(&buf[buf1_len+1],buf2,buf2_len);
buf[buf1_len+buf2_len+1]='\0';
printf("buf=%s\n",buf);
}
