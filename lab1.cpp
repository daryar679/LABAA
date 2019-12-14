#include <iostream>

using namespace std;

int global = 0;

int main()
{
	int automatic = 0;
	int* dynamic = new int;
	cout << &global << " " << &automatic << " " << dynamic << endl;
	delete dynamic;

	return 0;
}

