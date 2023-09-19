#include<stdio.h>
int main(){
    printf("请输入三角形的三条边长:");
    int a,b,c,temp;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        temp=a;
        a=b;
        b=temp;
    } 
    if(a>c){
        temp=a;
        a=c;
        c=temp;
    } 
    if(b>c){
        temp=b;
        b=c;
        c=temp;
    } 
    int e,f,g;
    e=a;
    f=b;
    g=c;
    if(e+f>g){
        printf("\n");
        if(f*f+e*e==g*g){
            printf("Rright triangle \n");
        }
        else if(f*f+e*e<g*g){
             printf("Obtuse triangle \n");
             if(f==e){
                printf("Isosceles triangle \n");
            }
        }
        else if(f*f+e*e>g*g){
            printf("Acute triangle \n");
            if(f==g){
                printf("Isosceles triangle \n");
                 if (e==f && f==g){
                printf("Equilateral triangle");
                }  
            
			}
        }
    }
    else {
        printf("Not triangle");
    }
}