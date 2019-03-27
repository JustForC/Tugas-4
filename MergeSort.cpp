#include <iostream>
#include<time.h>
using namespace std;
 
void Merge(int *a, int low, int high, int mid)
{
	int i, j, k, temp[high-low+1];
	i = low;
	k = 0;
	j = mid + 1;
 
	while (i <= mid && j <= high)
	{
		if (a[i] < a[j])
		{
			temp[k] = a[i];
			k++;
			i++;
		}
		else
		{
			temp[k] = a[j];
			k++;
			j++;
		}
	}
 
	while (i <= mid)
	{
		temp[k] = a[i];
		k++;
		i++;
	}
 
	while (j <= high)
	{
		temp[k] = a[j];
		k++;
		j++;
	}
 
 
	for (i = low; i <= high; i++)
	{
		a[i] = temp[i-low];
	}
}
 
void MergeSort(int *a, int low, int high)
{
	int mid;
	if (low < high)
	{
		mid=(low+high)/2;
		MergeSort(a, low, mid);
		MergeSort(a, mid+1, high);
 
		Merge(a, low, high, mid);
	}
}
 
int main()
{
	int n, i;
	cout<<"\nMasukan jumlah data: ";
	cin>>n;
 
	int arr[n];
	for(i = 0; i < n; i++)
	{
		cout<<"Masukan data ke-"<<i+1<<" : ";
		cin>>arr[i];
	}
	clock_t t1,t2;
	t1=clock();
	MergeSort(arr, 0, n-1);
 
	cout<<"\nData terurut ";
	for (i = 0; i < n; i++)
        cout<<"->"<<arr[i];
	cout<<endl;
	t2=clock();
	float diff((float)t2-(float)t1);
	float second=diff/CLOCKS_PER_SEC;
	cout<<"Runing time :"<<second<<" MS"<<endl;
	system("pause");
	return 0;
}