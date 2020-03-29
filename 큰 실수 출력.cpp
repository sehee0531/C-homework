#include<iostream>

using namespace std;

void main()
{
	
	double big[5];
	double max = big[0];

	cout << "5개의 실수를 입력하라>>";

	for (int i = 0; i < 4; i++)
	{
		cin >> big[i];

		if (big[i] > max)
		{
			max = big[i];
		}


	}
	cout << "제일 큰수 =" << max;

}


	

