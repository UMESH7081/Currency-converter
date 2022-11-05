#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
float amount,result;
int choice,choice2;
printf("\nEnter your available currency\n");
printf("1.rupees\n");
printf("2.Dollar\n");
printf("3.euro\n");
printf("4.riyal\n");
printf("5.dinar\n");
scanf("%d",&choice);
if(choice>5)
{
printf("Invalid choice!");
getch();
exit(0);
}
printf("\nEnter Amount:");
scanf("%f",&amount);
printf("\nAmount to be converted in which currency\n");
printf("1.rupees\n");
printf("2.Dollar\n");
printf("3.euro\n");
printf("4.riyal\n");
printf("5.dinar\n");
scanf("%d",&choice2);
switch(choice)
{
case 1:if(choice2==1)
{
printf("same amount not be converted.");
}
else if(choice2==2)
{
result=amount/74;
printf("%f,amount equal to %f dollar",amount,result);
}
else if(choice2==3)
{
result=amount/89;
printf("%f amount equal to %f Euro",amount,result);
}
else if(choice2==4)
{
result=amount/20;
printf("%f amount equal to %f riyal",amount,result);
}
else if(choice2==5)
{
result=amount/242;
printf("%f amount equal to %fdinar",amount,result);
}
break;
case 2:if(choice2==1)
{
result=amount*74;
printf("%f,amount equal to%f rupees",amount,result);
}
else if(choice2==2)
{
printf("\nsame amount can not be converted.");
}
else if(choice2==3)
{
result=amount*0.83;
printf("%f amount equal to %f Euro",amount,result);
}
else if(choice2==4)
{
result=amount*3.75;
printf("%f amount equal to %f riyal",amount,result);
}
else if(choice2==5)
{
result=amount*0.30;
printf("%f amount equal to %fdinor",amount,result);
}
break;
case 3:if(choice2==1)
{
result=amount/0.0113;
printf("%f,amount equal to%f rupees",amount,result);

}
else if(choice2==2)
{
result=amount/0.84;
printf("%f,amount equal to%f dollar",amount,result);
}
else if(choice2==3)
{
printf("\nsame amount can not be converted.");

}
else if(choice2==4)
{
result=amount/0.22;
printf("%f amount equal to %f riyal",amount,result);
}
else if(choice2==5)
{
result=amount/2.74;
printf("%f amount equal to %fdinor",amount,result);
}
break;
case 4:if(choice2==1)
{
result=amount/0.051;
printf("%f,amount equal to%f rupees",amount,result);

}
else if(choice2==2)
{
result=amount/3.75;
printf("%f,amount equal to%f dollar",amount,result);
}
else if(choice2==3)
{
result=amount/4.49;
printf("%f amount equal to %f Euro",amount,result);
}
else if(choice2==4)
{
printf("same amount can not be converted.");
}
else if(choice2==5)
{
result=amount/12.28;
printf("%f amount equal to %fdinar",amount,result);
}
break;
case 5:if(choice2==1)
{
result=amount/0.0041;
printf("%f,amount equal to%f Rupees",amount,result);
}
else if(choice2==2)
{
result=amount/0.31;
printf("%f,amount equal to%f dollar",amount,result);
}
else if(choice2==3)
{
result=amount/0.37;
printf("%f amount equal to %f Euro",amount,result);
}
else if(choice2==4)
{
result=amount/0.018;
printf("%f amount equal to %f riyal",amount,result);
}
else if(choice2==5)
{
printf("\nsame amount can not be converted.");
}
break;
default:
printf("Invalid Choice!");
}
getch();
}
