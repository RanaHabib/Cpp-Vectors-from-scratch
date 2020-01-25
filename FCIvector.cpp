
#include "FCIvector.h"

template<typename T>
FCIvector<T>::FCIvector() {
    NumberOfElements = 0;
    Capacity = 4;
    Elements = new T[Capacity];
}

template<class T>
int FCIvector<T>::size() {
    return NumberOfElements;
}

template<class T>
int FCIvector<T>::capacity() {
return Capacity;
}

template<class T>
bool FCIvector<T>::empty() {
    return (NumberOfElements == 0);
}

template<class T>
T &FCIvector<T>::operator[](int index) {
    if(index> NumberOfElements) {
        cout<<"Vector out of size, terminating\n";
        exit(0);
    }
    return Elements[index];
}

template<class T>
T *FCIvector<T>::begin() {
    T *ptr = &Elements[0];
    return ptr;
}

template<class T>
T &FCIvector<T>::front() {
    return &Elements[0];
}

template<class T>
T &FCIvector<T>::back() {
    return &Elements[NumberOfElements-1];
}

template<class T>
void FCIvector<T>::insert(T *position, T val) {
    NumberOfElements++;
    T *TempVector = new T[Capacity];
    T *TempElements = &Elements[0];

    for(int i = 0, j = 0; i < (NumberOfElements-1) && j < NumberOfElements; i++,j++){
        if(TempElements < position){
            TempVector[j] = Elements[i];
        }
        else if(TempElements == position){
            TempVector[j] = val;
            j++;
            TempVector[j] = Elements[i];
        }
        else{
            TempVector[j] = Elements[i];
        }
        TempElements++;
    }
    delete[] Elements;
    Elements  = TempVector;
}

template<class T>
void FCIvector<T>::push_back(T val) {
    NumberOfElements++;

    if(NumberOfElements <= Capacity){
        Elements[NumberOfElements-1] = val;
    }
    else{
        Capacity+= 16;
        T *TempVector = new T[Capacity];
        int i;
        for(i = 0; i<NumberOfElements-1;i++){
            TempVector[i] = Elements[i];
        }
        TempVector[i] = val;
        delete[] Elements;
        Elements = TempVector;
    }

}

template<class T>
void FCIvector<T>::pop_back() {
    //NumberOfElements--;

    T *TempVector = new T[Capacity];

    for(int i = 0; i<NumberOfElements ;i++){
        TempVector[i] = Elements[i];
    }

    delete[] Elements;
    Elements = TempVector;
}

template<class T>
void FCIvector<T>::clear() {
NumberOfElements = 0;
delete[] Elements;
}

template<class T>
void FCIvector<T>::erase(T *position) {
    NumberOfElements--;
    T *TempVector = new T[Capacity];
    T *TempPtr = &Elements[0];
    for(int i = 0, j = 0; i < NumberOfElements ;i++,j++){
        if(TempPtr == position){
            TempPtr++;
            i--;
            continue;
        }
        TempVector[i] = Elements[j];
        TempPtr++;
    }
    delete[] Elements;
    Elements = TempVector;
}
