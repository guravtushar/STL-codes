#include<iostream>
#include<vector>
#include<conio.h>
#include<list>
#include<algorithm>
using namespace std;
int main()
{
	//iterators are similar to pointers.
	int arr[] = { 11,1,7,8,4 };
	int* start = &arr[0];
	int* end = &arr[0] + (sizeof(arr) / sizeof(int));
	sort(start, end);
	for (; start != end; start++)
	{
		cout << *start << "\t";
	}
	cout << "\n";

	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(100);
	v.push_back(20);
	v.push_back(30);
	sort(v.begin(), v.end());
	vector<int>::iterator itr = v.begin();
	for (; itr != v.end(); itr++)
	{
		cout << *itr << " ";
	}
	cout << endl;
	cout << "Size : " << v.size() << endl;
	v.clear();
	cout << "Size : " << v.size() << endl;
	_getch();
	return 0;
}
