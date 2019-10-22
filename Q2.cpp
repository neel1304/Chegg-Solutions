#include<iostream>
#include<algorithm>
#include<string.h>
#include<vector>
using namespace std;
char word[100];//GLOBAL VARIABLE
string shorter;
string longer;
void displayintro()
{
	cout<<"A Palindrome word is a type of word which when read backward, reads the same as forward"<<endl;
	cout<<"and hence the purpose of the program is to display different things"<<endl;
	cout<<"The Shortest Palindrome, The Longest Palindrome"<<endl;
	cout<<endl;
}
void displaymenu()
{
	cout<<"Press 1 for Shortest Palindrome"<<endl;
	cout<<"Press 2 for Longest Palindrome"<<endl;
	cout<<"Press 3 for Palindrome Counter"<<endl;
	cout<<"Press 4 for Test word"<<endl;
	cout<<"Press 5 for QUIT"<<endl;
}
void getword()
{
	cout<<"Enter a Test Word"<<endl;
	cin>>word;
	int count=0;
	int len=strlen(word);
	for(int i=0;i<len;i++)
	{
		if((word[i]>='a' && word[i]<='z')|| (word[i]>='A' && word[i]<='Z'))
			count++;
	}
	if(count==len)
		cout<<"Proper Input"<<endl;
	else
	{
		cout<<"Enter the word again";
		for(int i=0;i<100;i++)
		cin>>word[i];
	}
}
bool ispalindrome(char str[])
{
	int l = 0; 
    int h = strlen(str)- 1; 
    while (h > l) 
    { 
        if (str[l++] != str[h--]) 
        { 
            return 0;
        } 
    } 
   return 1;
}
int main() {
 
	ios_base::sync_with_stdio(false);
	cin.tie(0);
 
#ifdef __APPLE__
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	int choice=0;
	int counter=0;
	displayintro();
	int ns=0;
	cout<<"Number of strings"<<endl;
    cin>>ns;
	int shortl=100;
	int longl=0;
    while(ns--)
{
	displaymenu();
	cin>>choice;
	getword();//WORD
	//vector<string>v1;
	if(ispalindrome(word)==1)
		counter++;

	switch(choice)
	{
		case 1:
		    if(strlen(word)<shortl)
		    {
		        shortl=strlen(word);
		        shorter=word;
		    }

				cout<<"Shortest Palindrome is "<<shorter<<endl;
				break;

	   case 2: 
	   
		 if(strlen(word)>longl)
		 {
		     longl=strlen(word);
		     longer=word;
		 }
				cout<<"Longest Palindrome is "<<longer<<endl;
				break;


	  case 3:
	  cout<<"Number of Palindromes are "<<counter<<endl;
	  break;

	  case 4:

	  if(ispalindrome(word)==1)
	  	cout<<"TEST WORD is PALINDROME"<<endl;
	  break;

	  case 5:

	  cout<<"YOU HAVE CALLED IT QUITS!!"<<endl;
	  cout<<"Longest Palindrome is "<<longer<<endl;
	  cout<<"Shortest Palindrome is"<<shorter<<endl;
	  cout<<"Total Number of Palindromes are "<<counter+1<<endl;
	  break;
	}//END OF SWITCH CASE
}//WHILE
	
	return 0;
} //MAIN 
