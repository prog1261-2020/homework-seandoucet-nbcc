/*
Copyright 2020 Sean Doucet
All Rights Reserved
*/

// C++ Standard Library Pre Processor
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <thread>
#include <vector>
#include <atomic>
#include <mutex>
#include <chrono>

// Header File Pre Processor
#include "WorkQueue.h"

// Global Variables Declaration
std::atomic<bool> make_work(false);
WorkQueue jobs;
std::mutex cout_mutex;

// Functions for Producers and Consumers
void producer() {
	while (true) {
		jobs.push(rand() % 100);
		std::this_thread::sleep_for(std::chrono::milliseconds(10));
	}
}

void consumer(int id) {
	while (true) {
		int n = jobs.pop();
		int sz = jobs.size();

		cout_mutex.lock();
		std::cout << ": " << sz <<
			id << "processed" << n << std::endl;
		cout_mutex.unlock();
	}
}

// C++ Main Program Function
int main() {
	srand(time(0));

	std::vector<std::thread> producers;
	std::vector<std::thread> consumers;

	for (int i = 0; i < 1; ++i) {
		producers.push_back(std::thread(producer));
	}

	for (int i = 0; i < 5; ++i) {
		consumers.push_back(std::thread(consumer, i));
	}

	for (auto& t : producers) {
		t.join();
	}

	for (auto& t : consumers) {
		t.join();
	}
}