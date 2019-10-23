/*LINEAR SEARCH USING WHILE LOOP IN JAVA*/

import java.util.*;
class Linearsearch
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int len=0;
        int key=0;
        System.out.println("Enter the length of the array");
        len=sc.nextInt();//Length of the Array
        int arr[]=new int[len];
        System.out.println("Enter the array");
        for(int i=0;i<len;i++)
        arr[i]=sc.nextInt();//Array Input
        System.out.println("Enter the key to search");
        key=sc.nextInt();//
        
        int j=0;
        int pos=0;
        while(j!=len-1)
        {
            if(arr[j]==key)
            {
                pos=j;
                break;
            }
            else
            pos=0;
            j++;
        }
        if(pos==0)
        System.out.println("Key is not present in the array");
        else
        System.out.println("Key is present at position "+j);
        
    }
}
