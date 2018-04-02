#include<iostream>
using namespace std;
int main()
{
	int a[3][3] = { 0 };
	for (int i = 0; i<3; i++)
		for (int j = 0; j<3; j++)
			cin >> a[i][j];
	int x = a[0][0] + a[1][1] + a[2][2];
	int y = a[2][0] + a[1][1] + a[0][2];
	cout << x << " " << y;
}