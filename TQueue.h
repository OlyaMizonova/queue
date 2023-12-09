#pragma once
template <class T>
class TQueue {
public:
	TQueue<T>(int size_) {
		if (size_ < 0) { throw - 1; }
		pMem = new T[size_];
		count = 0; size = size_;
		start = 0; finish = -1;
	}
	~TQueue() {
		delete[]pMem;
	}
	bool is_full() {
		return count == size;
	}
	bool is_empty() {
		return !count;
	}
	T pop() {
		if (is_empty()) {
			throw "empty queue";
		}
		T el = pMem[start];
		start++;
		start =start % size;
		count--;
		return el;
	}
	T front() const {
		return pMem[start];
	}
	T back() const {
		return pMem[finish];
	}
	void push(const T &el) {
		finish++;
		finish = finish % size;
		if (is_full()) {
			throw "full queue";
		}
		pMem[finish] = el;
		count++;
	}
private:
	T* pMem;
	int count, size, start, finish;
};