

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int sum = 0;
	for (int i = 1; i < 200; i += 2)
	{
		if (i % 2 == 1)
			sum += 1;
	}
	cout << "Rezult " << sum << endl;
	system("pause");
	return 0;
}


