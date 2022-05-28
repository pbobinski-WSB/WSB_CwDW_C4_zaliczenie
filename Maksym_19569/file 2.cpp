#include <iostream>
#include <thread>

using namespace std;


void goodbye_memmory() {
	for (;;)
	{
		long long* k = new long long;
	}
}

int main() {

	thread th1(goodbye_memmory), th2(goodbye_memmory), th3(goodbye_memmory), th4(goodbye_memmory), th5(goodbye_memmory), th6(goodbye_memmory);



	while (true)
	{
		cout << "Your memmory is going to be mine(NOT YOUR) and only mine" <<endl;
	}

	return 0;
}