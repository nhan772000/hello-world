#include <iostream>
using namespace std;
int main(){
	// khoi tao n
	int n;

	cout<<"Nhap so n: ";
	cin>>n;
	// tao mang nxn
	int **arr=new int*[n];
	for(int i=0;i<n;i++)
	{
		arr[i]=new int[n];
	}
	// thuc thi
	int i,j=0;
	

	// xuat mang
	for(int i=0;i<n;i++)
		for(int j=0;i<n;j++)
			cout<<arr[i][j];
	system("pause");
	return 0;
}
