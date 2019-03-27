#include<iostream.h>
#include<conio.h>
int main()
{
	int size, arr[50], i, j, temp;
	cout<<"Masukan jumlah array : ";
	cin>>size;

	for(i=0; i<size; i++)
	{
		cout<<"Masukan array ke-"<<i+1<<" :";
		cin>>arr[i];
	}
	for(i=0; i<size; i++)
	{
		for(j=i+1; j<size; j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout<<"Data terurut :\n";
	for(i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}
	getch();
}