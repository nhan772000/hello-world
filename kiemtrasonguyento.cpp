#include <iostream>
#include <math.h>
using namespace std;
// written by Nguyen Phuc Nha
bool kiemtrasonguyento(int);
int main(){
	cout<<"Nhap n: ";
	int n=0;
	cin>>n;
	if(kiemtrasonguyento(n))
		cout<<"Day la so nguyen to\n";
	else
		cout<<"khong la nguyen to\n";
	system("pause");
	return 0;
}
bool kiemtrasonguyento(int n) // kiem tra so nguyen n co phai so nguynen to hay khong, neu dung thi nhan true. khong thi false
{
	if(n<2)
	{
		return 0;
	}
	else if(n==2||n==3){
		return 1;
	}
	else
	{
	for(int i=2;i<=sqrt(double(n));i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
	}
}
