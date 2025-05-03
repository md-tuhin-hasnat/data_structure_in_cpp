#ifndef VECTOR_H
#define VECTOR_H

#include <stdexcept>

template <typename T>
class Vector {
private:
    T* data;
    int _size;
    int _capacity;

    void resize() {
        _capacity <<= 1; // same as _capacity *= 2;
        T* newData = new T[_capacity];

        for (int i = 0; i < _size; i++) {
            newData[i] = data[i];
        }

        delete[] data;
        data = newData;
    }

public:
    Vector() {
        _size = 0;
        _capacity = 1;
        data = new T[_capacity];
    }

    ~Vector() {
        delete[] data;
    }

    unsigned int size() {
        return _size;
    }

    void push_back(T value) {
        if (_size == _capacity) {
            resize();
        }
        data[_size++] = value;
    }

    void pop_back() {
        if (_size > 0) {
            _size--;
        }
    }

    T& operator[](int index) {
        if (index < 0 || index >= _size) {
            throw std::out_of_range("Index Out of bound");
        }
        return data[index];
    }
};

#endif // VECTOR_H
