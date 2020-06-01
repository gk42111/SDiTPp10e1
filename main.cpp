#include <queue>
#include <iostream>
#include "ArrayQueue.h"
using namespace std;

queue <int> kolejkaLiczb;

int main() {
	ArrayQueue<int,10> MojaKolejka;
	MojaKolejka.enqueue(1);

	system("pause");
	return 0;
}