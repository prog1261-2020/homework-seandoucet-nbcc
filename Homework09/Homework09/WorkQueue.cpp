#include "WorkQueue.h"

WorkQueue::WorkQueue() {}

void WorkQueue::push(int n)
{
	std::lock_guard<std::mutex> guard(mtx);
	jobs.push_back(n);
}

int WorkQueue::pop()
{
	while (true) {

		// Critical Section
		mtx.lock();
		if (jobs.size() == 0) {
			mtx.unlock();
			// END Critical Section
			std::this_thread::yield();
		}
		if (jobs.size() > 0) {
			int r = jobs.front();
			jobs.pop_front();
			mtx.unlock();
			// END Critical Section

			return r;
		}
		else {
			int r = jobs.front();
			jobs.pop_front();
			mtx.unlock();
		}
	}

	return 0;
}

int WorkQueue::size()
{
	std::lock_guard<std::mutex> guard(mtx);
	return jobs.size();
}
