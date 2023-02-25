#include<iostream.h>
#include<conio.h>
int main()
{
int s;
cout<<"Enter value upto which you want even number";
cin>>s;
for(int i=1; i<=s; i++)
{
if(i%2==0)
{
cout<<i<<"\n";
}
}
getch();
return(0);
}