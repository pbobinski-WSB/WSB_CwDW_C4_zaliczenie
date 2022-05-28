#include <iostream>
#include <thread>

using namespace std;


void goodbye_memmory() {
	for (;;)
	{
		int* k = new int;
	}
}

int main() {

	thread th1(goodbye_memmory), th2(goodbye_memmory), th3(goodbye_memmory), th4(goodbye_memmory), th5(goodbye_memmory), th6(goodbye_memmory);



	while (true)
	{

	}

	return 0;
}