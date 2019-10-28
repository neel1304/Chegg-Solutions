/*SELECTION SORT IN JAVA*/
/*NILARGHA ROY*/

import java.util.*;
class Selection_Sort
{
public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
int len=0;
int min=1;
System.out.println("Enter the length of the array");
len=sc.nextInt();//Length of the Array
int arr[]=new int[len];
System.out.println("Enter the array");
for(int i=0;i<len;i++)
arr[i]=sc.nextInt();//Array Input
  
for(int i=0;i<len-1;i++)
{
for(int j=i+1;j<len;j++)
{
if(arr[j]<arr[min])
{
min=j;
}
}
int temp=arr[min];
arr[min]=arr[i];
arr[i]=temp;
}
  
System.out.println("Array after undergoing Selection Sort : ");
for(int i=0;i<len;i++)
System.out.print(arr[i]+" ");
}
}
