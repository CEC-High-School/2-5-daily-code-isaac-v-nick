#include<iostream>
#include <ctime>
#include <Windows.h>
using namespace std;
int main() {
	srand(time(NULL));
	while (1) {
		int a = (rand() % 1800 + 200);
		int b = (rand() % 1800 + 200);

		Beep(a, b);

	}


}