#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include <queue>
#include <stdexcept>

using namespace std;

template <typename T>
class Queue {
	public:
		void enqueue(const T &item) {
			items.push(item);
		}

		T dequeue() {
			if (items.empty()) {
				throw std::out_of_range("Queue is empty");
			}
			T item = items.front();
			items.pop();
			return item;
		}

		T front() const {
			if (items.empty()) {
				throw std::out_of_range("Queue is empty");
			}
			return items.front();
		}

		size_t size() const {
			return items.size();
		}

	private:
		std::queue<T> items;
};

#endif // QUEUE_H
