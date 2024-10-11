#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <iostream>
#include <map>
#include <stdexcept>

using namespace std;

template <typename K, typename V>
class Dictionary {
	public:
		void set(const K &key, const V &value) {
			items[key] = value;
		}

		V get(const K &key) const {
			auto it = items.find(key);
			if (it == items.end()) {
				throw std::out_of_range("Key not found");
			}
			return it->second;
		}

		void remove(const K &key) {
			auto it = items.find(key);
			if (it == items.end()) {
				throw std::out_of_range("Key not found");
			}
			items.erase(it);
		}

		size_t size() const {
			return items.size();
		}

		void printKeys() const {
			for (const auto &pair : items) {
				std::cout << pair.first << " ";
			}
			std::cout << std::endl;
		}

	private:
		std::map<K, V> items;
};

#endif // DICTIONARY_H
