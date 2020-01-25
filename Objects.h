#ifndef ASSIGNMENT3_OBJECTS_H
#define ASSIGNMENT3_OBJECTS_H


#include "FCIvector.h"
#include <string>
template <class T>
class Objects{
    FCIvector<T> obj;
public:
    Objects(FCIvector<T> Obj);

    void Menu();
};




#endif //ASSIGNMENT3_OBJECTS_H
