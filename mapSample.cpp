#include<iostream>
#include<conio.h>
#include<map>

using namespace std;
int main()
{
	pair<int, int> p = make_pair(10, 20);
	p = make_pair(20, 30);
	cout << p.first << "==" << p.second << endl;

	map<int, int> mp;
	mp[4] = 400;
	mp[3] = 300;
	mp.insert(make_pair(10, 20));
	for (auto i = mp.begin(); i != mp.end(); i++)
	{
		cout << i->first << "---" << i->second;
	}



	_getch();
	return 0;
}