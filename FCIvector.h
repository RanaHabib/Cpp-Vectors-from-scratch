#ifndef ASSIGNMENT3_FCIVECTOR_H
#define ASSIGNMENT3_FCIVECTOR_H

#include <iostream>
using namespace std;
template <typename T>
class FCIvector {
private:
    T* Elements;
    int NumberOfElements;
    int Capacity;
public:
    FCIvector();

    int size();
    int capacity();
    bool empty();
    T&operator[](int index);
    T* begin();
    T& front();
    T& back();
    void insert(T* position, T val);
    void push_back(T val);
    void pop_back();
    void clear();
    void erase(T* position);

};


#endif //ASSIGNMENT3_FCIVECTOR_H
