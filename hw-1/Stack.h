#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

template <typename T>
class Stack {
	public:
		void push(const T &item) {
			items.push_back(item);
		}

		T pop() {
			if (items.empty())
			{
				throw std::out_of_range("Stack is empty");
			}
			T item = items.back();
			items.pop_back();
			return item;
		}

		T peek() const {
			if (items.empty())
			{
				throw std::out_of_range("Stack is empty");
			}
			return items.back();
		}

		size_t size() const {
			return items.size();
		}

	private:
		std::vector<T> items;
};

#endif // STACK_H
