#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
//如果 x > y，则 *res < - * res + 1
void greater(int * res, int x, int y) {
    if (x > y){
       *res += 1;}
    
}
 //如果 x < y，则 *res < - * res + 1
 void less(int * res, int x, int y) {
     if (x < y){
       * res += 1;
}
 }
 typedef void (*Funcptr)(int * res,int x,int y);
 // 统计长度为 n 的数组 a 中大于/小于 k 的元素个数，比较谓词通过函数参数传入
 int count(int a[i],size_t num,int sta,void (*p)(Funcptr greater,Funcptr less)) 
 {
     int *fuck
     greater(* fuck,a[i],sta);
     less(* fuck,a[i],sta);

 }

 int main() {
 srand(time(NULL));
 int n, k;
 scanf("%d%d", &n, &k); // 输入数组的长度 n 和比较值 k
 int * a = malloc(n * sizeof(int));
  for (int i = 0; i < n; + i)
 a[i] = rand() % 100; // 生成 100 以内的随机数
 printf("Array: ");
 for (int i = 0; i < n; + i)
 printf("%d ", a[i]);
 puts("");
 // 大于 k 的数的个数
 printf("Numbers of greater than %d: %d\n", k, count(a, n, k,
 greater));
 // 小于 k 的数的个数
 printf("Numbers of greater than %d: %d\n", k, count(a, n, k,less));
  free(a);
 return 0;
 }
 int i=0;

 if (i<=num){

 int (greater) || (less)(int * res,int a[i],int sta);
 i++;

 }

else {

return greater || less(res) ;

};