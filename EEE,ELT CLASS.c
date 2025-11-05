/*
#include<stdio.h>
int main(void){
float temp[5];
float sum=0,max,min;
printf("enter 5 temperature reading:\m");
for(int i=0i;i<5;i++){
    scanf("%f",&temp[i]);
    sum += temp[i];
}
max= min= temp[0];
for(int i=1;i<5;i++){
    if(temp[i]>max)max = temp[i];
    if(temp[i]<min)min =temp[i];
}
printf("average=%.2fc max=% min=%.2fc\n", sum/5,max,min);
return 0;

}
*/

/*
#include<stdio.h>
#include<string.h>
#define MAX 10
int main(void){
 char slots[MAX][15];
int occupied[MAX]={0};
int choice;char plate[15];

while(1){
    printf("\n1.enter 2.leave 3.display 4.exit\n choice: ");
    scanf("%d,&choice");
    if(choice==1){
        //code for entering a car
    }else if(choice==2){
        //code for leaving
    }else if(choice==3){
        //code for displaying slots
    }else break;
}
return 0;
}
*/

/*
#include<stdio.h>
int main(void){
float level;
printf("enter water level(in %%): ");
scanf("%f",&level);
if(level>=90)
    printf("pump OFF tank is full. \n");
else if(level>=20)
    printf ("pump ON tank is low. \n");
    else
        printf("pump idle level stable. \n");
    return 0;
}

*/

/*
#include<stdio.h>
int main(void){
int choice, qty; float total=0;
do{
    printf("\n1.Pizza(5$) 2.Burger(3$) 3.Juice(2$) 4.Exit\nchoice: ");
    scanf("%d",&choice);
    switch(choice){
    case4:break;

    default:printf("invalid choice\n");

    }
}while(choice!=4);
printf("\ntotal bill =$%.2f\n",total);

    return 0;

}
*/

/*
#include<stdio.h>
int main(void){
float units, bill;
printf("enter the consumed units : ");
scanf("%f",&units);
if(units<=100)bill=units*0.5;
else if(units<=200)bill=100*0.5+(units-10)*0.75;
else bill=100*0.5+100*0.75+(units-200)*1.20;
printf("total electricity bill: $%,2f\n",bill);
return 0;
}
*/
