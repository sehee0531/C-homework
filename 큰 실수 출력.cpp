#include<iostream>

using namespace std;

void main()
{
	
	double big[5];
	double max = big[0];

	cout << "5���� �Ǽ��� �Է��϶�>>";

	for (int i = 0; i < 4; i++)
	{
		cin >> big[i];

		if (big[i] > max)
		{
			max = big[i];
		}


	}
	cout << "���� ū�� =" << max;

}


	

