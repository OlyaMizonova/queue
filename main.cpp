#include<iostream>
#include"TQueue.h"
#include"gtest.h"

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
	/*TQueue<int> q(15); int t;
	std::cout << "1. 0 - is not empty\n2. 1 - is empty\n now queue is "<< q.is_empty()<<std::endl;
	for (int i = 0; i < 5; i++) {
		std::cout << i<<" elem = ";
		std::cin >> t;
		q.push(t);
	}
	std::cout << "1. 0 - is not full\n2. 1 - is full\n now queue is " << q.is_full() << "\n\n";
	for (int i = 0; i < 5; i++) {
		std::cout << i << " elem = "<<q.pop()<< std::endl;
	}*/
}