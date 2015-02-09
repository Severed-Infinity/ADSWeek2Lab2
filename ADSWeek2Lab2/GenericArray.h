//
//  GenericArray.h
//  ADSWeek2Lab2
//
//  Created by david swift on 09/02/2015.
//  Copyright (c) 2015 david swift. All rights reserved.
//

#ifndef __ADSWeek2Lab2__GenericArray__
#define __ADSWeek2Lab2__GenericArray__

#include <stdio.h>

//A Generic Array that works for Numerical Types ONLY.
template<typename T>
class GenericArray {
private:
    int capacity;
    int iter = 0;
    T* innerArray;
    
public:
    GenericArray();
    GenericArray(const int cap);
    ~GenericArray();
    void addEntry(const T &t);
    int totalValue();
};

template<typename T>
GenericArray<T>::GenericArray(){
    capacity = 10;
    innerArray = new T[capacity];
}

template<typename T>
GenericArray<T>::GenericArray(const int cap){
    capacity = cap;
    innerArray = new T[capacity];
}

template<typename T>
GenericArray<T>::~GenericArray(){
    delete [] innerArray;
}

template<typename T>
void GenericArray<T>::addEntry(const T &t) {
    innerArray[iter] = t;
    iter++;
}

template<typename T>
int GenericArray<T>::totalValue(){
    int sum = 0;
    int i = 0;
    while(i < iter) {
        sum+=innerArray[i++];
    }
    return sum;
}
#endif /* defined(__ADSWeek2Lab2__GenericArray__) */
