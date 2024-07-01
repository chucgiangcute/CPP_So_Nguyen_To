// CPP_So_Nguyen_To.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*#include <iostream>
using namespace std;
int main()
{
	int a;
	cout << "Nhap so a :" << " ";
	cin >> a;
	{
		for (int i = 2; i < a; i++);
		for (int j = 2; j * j <= a; j++)
		{
			if (a < 2)
			{
				cout << "Khong phai là so nguyen to :"<< " ";
			}
			else if (a % 2 == 0)
			{
				cout << "Khong phai la so nguyen to :"<<" ";
			}
			else if (a == 2)
			{

			}
			}
		}
}*/





#include <iostream>
using namespace std;
bool ktSNT(int so)
{
	int dem = 0;
	for (int i = 1;i <= so;i++)
	{
		if (so % i == 0)
			dem++;
	}
	if (dem == 2)
	{
		return true;
	}
	if (dem < 2)
	{
		return false;
	}
}
int main()
{   
	int dem;
	cout << "Nhap so :" << " ";
	cin >> dem;
	if (ktSNT(dem))
	{
		cout << dem << "la so nguyen to";
	}
	else {
		cout << dem << "khong phai la so nguyen to";
	}
	return 0;
}