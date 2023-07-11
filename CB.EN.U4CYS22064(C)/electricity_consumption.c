
#include<stdio.h> 
int main(){
 struct EC{
 char name[20];
 int EB_num;
 int units;
 double ec_bill;
 };
 int i;
 double bill = 0;
 struct EC house[5];
 for(i=0;i<5;i++){
 scanf("%s",&house[i].name);
 scanf("%d",&house[i].EB_num);
 scanf("%d",&house[i].units);
 }
 for(i=0;i<5;i++){
 if(house[i].units>=0 && house[i].units<=100){
 bill = 0;
 }
 else if(house[i].units>100 && house[i].units<=400){
 bill = (house[i].units - 100)*2.25;
 }
 else if(house[i].units>400 && house[i].units<=500){
 bill = 300*2.25 + (house[i].units - 400)*4.50;
 }
 else if(house[i].units>500 && house[i].units<=600){
 bill = 300*2.25 + 100*4.50 +(house[i].units - 500)*6;
 }
 else if(house[i].units>600){
 bill = 300*2.25 + 100*4.50 + 100*6 +(house[i].units -500)*8;
 }
 house[i].ec_bill = bill;
 }
 for(i=0;i<5;i++){
 printf("Name: %s\n",house[i].name);
 printf("EB_number: %d\n",house[i].EB_num);
 printf("Electricity Bill: %.2lf\n",house[i].ec_bill);
 }
return 0;
}
