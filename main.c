#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int faktoriyel(int f){
int faktoryel;
faktoryel=1;
while(f>0){
faktoryel=faktoryel*f;
f--;
}
return faktoryel;
}
int kombinasyon(int i,int j){
int komb;
komb=faktoriyel(i)/(faktoriyel(j)*faktoriyel(i-j));
return komb;
}


int main()
{
int x,a,kon;
printf("(x+y) binom acilimi icin 1 e (x-y) binom acilimi icin 2 ye basiniz : " );
scanf("%d",&kon);
if(kon==1){
printf("(x+y)'nin kacinci kuvvetini istiyosunuz : ");
scanf("%d",&x);
for(a=0;a<=x;a++){
printf("%dx^%d y^%d ",kombinasyon(x,a),x-a,a);
if(a!=x){printf("+ ");}
}
}
else{
printf("(x-y)'nin kacinci kuvvetini istiyosunuz : ");
scanf("%d",&x);
for(a=0;a<=x;a++){
printf("%dx^%d y^%d ",kombinasyon(x,a),x-a,a);
if(a!=x){
if(a%2==0)
{printf("- ");}
else
{printf("+ ");}
}
}
}
getch();
}




