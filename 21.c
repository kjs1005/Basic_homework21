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
printf("�п�J��%d����u�s��\n",i+1); 
scanf("%d",&output[i].number); 
printf("�п�J��%d����u�m�W\n",i+1); 
scanf("%s",&output[i].name); 
printf("�п�J��%d��򥻮��~\n",i+1); 
scanf("%d",&output[i].money); 
printf("�п�J��%d��u�@�ɶ�\n",i+1); 
scanf("%d",&output[i].time); 
} 
printf("�s�� �m�W �򥻮��~ �u�@�ɼ� \n"); 
printf("--------------------------------------------------\n"); 
for(i=0;i<5;i++) 
{ 
printf("%2d %6s %8d %8d ",output[i].number,output[i].name,output[i].money,output[i].time); 
printf("\n"); 
} 
system("pause"); 
return 0; 
} 
