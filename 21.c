#include <stdio.h> 
#include <stdlib.h> 
struct Servitor 
{ 
int number; 
char name[10]; 
int money; 
int time; 
}; 

int main(void) 
{ 
int i,j; 
struct Servitor output[5]; 

for(i=0;i<5;i++) 
{ 
printf("請輸入第%d位員工編號\n",i+1); 
scanf("%d",&output[i].number); 
printf("請輸入第%d位員工姓名\n",i+1); 
scanf("%s",&output[i].name); 
printf("請輸入第%d位基本時薪\n",i+1); 
scanf("%d",&output[i].money); 
printf("請輸入第%d位工作時間\n",i+1); 
scanf("%d",&output[i].time); 
} 
printf("編號 姓名 基本時薪 工作時數 \n"); 
printf("--------------------------------------------------\n"); 
for(i=0;i<5;i++) 
{ 
printf("%2d %6s %8d %8d ",output[i].number,output[i].name,output[i].money,output[i].time); 
printf("\n"); 
} 
system("pause"); 
return 0; 
} 
