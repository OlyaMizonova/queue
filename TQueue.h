#pragma once

template <class T>
class TQueue {
public:
	TQueue<T>(int size_=10) {
		if (size_ < 0) { throw - 1; }
		pMem = new T[size_];
		count = 0; size = size_;
		start = 0; finish = -1;
	}
	~TQueue() {
		delete[]pMem;
	}

	TQueue<T>& operator = (const TQueue<T>&q) {
		if (this == &q) {
			return *this;
		}
		if (size != q.size) {
			delete[]pMem;
			pMem = new T[q.size];
			size = q.size;
		}
		count = q.count;
		start = q.start;
		finish= q.finish;
		for (int i = 0; i < size; i++) {
			pMem[i] = q.pMem[i];
		}
		return *this;
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
		start = start % size;
		count--;
		return el;
	}
	T front() const {
		return pMem[start];
	}
	T back() const {
		return pMem[finish];
	}
	void push(const T& el) {
		finish++;
		finish = finish % size;
		if (is_full()) {
			throw "full queue";
		}
		pMem[finish] = el;
		count++;
	}
	int GetMaxSize() const{
		return size;
	}
	int GetStart() const{
		return start;
	}
	int GetFinish() const{
		return finish;
	}
	int GetCount() const {
		return count;
	}
private:
	T* pMem;
	int count, size, start, finish;
};