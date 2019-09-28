#include <iostream> 
#include <vector> 
#include<conio.h>
using namespace std;

int main()
{
	vector<int> myvector{ 1, 2, 3, 4, 5 };
	myvector.push_back(6);

	// Vector becomes 1, 2, 3, 4, 5, 6 

	for (auto it = myvector.rbegin(); it != myvector.rend(); ++it)
		cout << ' ' << *it;
	cout << endl;
	for (int i = 0; i < myvector.size(); i++)
	{
		cout << ' ' << myvector[i];
	}
	_getch();
	return 0;
}