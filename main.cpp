#include<iostream>
#include"TQueue.h"
#include"gtest.h"

#include <random>

//#define TESTS

#ifdef TESTS
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
#endif TESTS
#ifndef TESTS

struct Tasks {
	int id; 
	int procs; //compexity/number of processes
	int time;  //time in tackts
};

int main() {
	std::random_device rd;   // non-deterministic generator
	std::mt19937 gen(rd());  // to seed mersenne twister.

	std::uniform_int_distribution<> prob_add(1, 1000);
	std::uniform_int_distribution<> prob_out(1, 1000);
	std::uniform_int_distribution<> prob_proc(1,9);
	std::uniform_int_distribution<> prob_time(1, 5);

	TQueue<Tasks> que(100);
	double q_Static, p_Static;
	int n, el, iden = 0;
	std::cout << "Enter p (add to queue): ";
	std::cin >> p_Static;
	std::cout << "Enter q (pop from queue): ";
	std::cin >> q_Static;
	std::cout << "If you want to enter numbers set a number of them: ";
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		Tasks temp;
		std::cout << "Enter procs (from 1 to 9): ";
		std::cin >> el;
		temp.procs = el;
		std::cout << "Enter time (from 1 to 10): ";
		std::cin >> el;
		temp.time = el;
		temp.id = iden;
		iden++;
		que.push(temp);
	}
	int startStatus = n, finishStatus = n;
	int pushes = 0, pops = 0;
	for (int i = 0; i < 100; i++) {
		double p = prob_add(gen)/1000.0, q = prob_out(gen)/1000.0;
		if (p < p_Static) {
			int proc = prob_proc(gen), tim = prob_time(gen);
			Tasks temp = {iden, proc, tim};
			que.push(temp);
			pushes++; finishStatus++;
			iden++;
		}
		if (q < q_Static) {
			if (!que.is_empty()) {
				que.pop();
				finishStatus--;
				pops++;
			}
		}
	}
	std::cout << "start status: " << startStatus << " finish status: " << finishStatus
		<< " pushes: " << pushes << " pops " << pops;
	return 0;
}
#endif !TESTS
