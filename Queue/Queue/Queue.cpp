// Queue.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define SIZE 5

using namespace std;

class Queue {
private: 
	int items[SIZE], front, rear;

public:
	Queue() {
		front = -1;
		rear = -1;
	}

	bool isFull() {
		if (front == 0 && rear == SIZE - 1) {
			return true;
		}
		return false;
	}
};