#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
int sp,cp,pr,ls;
cout<<"Enter the cost price";
cin>>cp;
cout<<"Enter the selling price";
cin>>sp;
if(cp>sp){
cout<<"You are in loss";
ls=cp-sp;
cout<<"Loss is \t" <<ls;

}
else{
pr = sp - cp;
cout<<"Profit is \t"<<pr;
}
getch();
return 0;
}