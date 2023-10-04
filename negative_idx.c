#include <stdio.h>
#include <string.h>
int main() {
const char * str = "Welcome to join Embedded Studio!";
char negative_idx_str[52];
memset(negative_idx_str, 0,sizeof(negative_idx_str));
strncpy(negative_idx_str,str,strlen(str));
for (int i = -52; negative_idx_str[i+52]; i++){
putchar(negative_idx_str[i+52]);
puts("");
}
return 0;
}/*之后我才发现我把题目更改了，但苦思冥想，仍不知该如何完成*/