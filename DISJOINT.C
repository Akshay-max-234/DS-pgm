#include<stdio.h>
#include<stdlib.h>
void main()
{
int arr1[30],i,n,a,b,temp,arr2[30],ch;
clrscr();
printf("\n1.CREATE");
printf("\n2.UNION");
printf("\n3.FIND");
printf("\n4.EXIT");
while(1)
{
printf("\n Enter Choice");
scanf("%d",& ch);
switch(ch)
{
case 1 ://CREATE SET
printf("Enter no.of elements in Set:");
scanf("%d",& n);
printf("Enter elements in set:");
for(i=0;i<n;i++)
{
scanf("%d",&arr1[i]);
arr2[i]=i;
}
break;
case 2 ://UNION
printf("\n Enter the index of elements (2 indices) which are to connected(Union):\n");
scanf("%d%d",&a,&b);
temp=arr2[a];
for(i=0;i<n;i++)
{
if(arr2[i]==temp)
arr2[i]=arr2[b];
}
printf("\n Element Status-after-union\n");
for(i=0;i<n;i++)
{
printf("%d\t\t%d\n",arr1[i],arr2[i]);
}
printf("\n Elements have been successfully connected(Union Operation)\n");
break;
case 3://FIND
printf("/n Enter the index of elements (2 indices) whose connection is to be checked (Find Operation):\n");
scanf("%d%d",&a,&b);
if(arr2[a]==arr2[b])
printf("\n Elements at indices %d&%d are connected \n",a,b);
else
printf("\n Elements at indices %d&%d are not connected \n",a,b);
break;
case 4://EXIT
exit(0);
break;
default:
printf("\n Wrong Choice,please select a valid choice");
break;
}
}
}
