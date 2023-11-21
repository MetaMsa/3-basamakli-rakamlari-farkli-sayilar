#include <iostream>
#include <windows.h>
#define bayrak "Color 4F"
#define bitir cin.get();

using namespace std;

int main()
{
system(bayrak);
 int a[3]={1,0,0},sayi=0;

 for(int i=100;i<1000;i++)
 {
	 if(a[0]!=a[1]&&a[0]!=a[2]&&a[1]!=a[2])
	 {
	 sayi++;
	 }
	 a[2]++;
	 if(a[2]==10)
	 {
		 a[2]=0;
		 a[1]++;
	 }
	 if(a[1]==10)
	 {
		 a[1]=0;
		 a[0]++;
	 }
 }
 cout<<"rakamlari farkli 3 basamakli sayilarin sayisi = "<<sayi;
 bitir
}
