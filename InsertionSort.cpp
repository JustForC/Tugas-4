#include<iostream.h>
#include<conio.h>
int main()
{
	int size, arr[50], i, j, temp;
	cout<<"Masukan jumlah array : ";
	cin>>size;

	for(i=0; i<size; i++)
	{	
		cout<<"Masukan nilai ke-"<<i+1<<" :";
		cin>>arr[i];
	}
	for(i=1; i<size; i++)
	{
		temp=arr[i];
		j=i-1;
		while((temp<arr[j]) && (j>=0))
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=temp;
	}
	cout<<"Data yang sudah terurut : \n";
	for(i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}
	getch();
}