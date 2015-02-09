//
//  Triple.h
//  ADSWeek2Lab2
//
//  Created by david swift on 09/02/2015.
//  Copyright (c) 2015 david swift. All rights reserved.
//

#ifndef __ADSWeek2Lab2__Triple__
#define __ADSWeek2Lab2__Triple__

#include <stdio.h>

template <typename T>
class Triple {
    T min;
    T med;
    T max;
    
public:
    Triple(T t1, T t2, T t3);
    T minimum();
    T median();
    T maximum();
};

template <typename T>
Triple<T>::Triple(T t1, T t2, T t3){
    T values[3] = {t1, t2, t3};
    int gap = 3;
    bool swapped = true;
    while (gap > 1 || swapped){
        if (gap > 1){
            gap = (gap * 10) / 13;
        }
        swapped = false;
        for (unsigned int i = 0; i + gap < 3; i++){
            if (values[i] > values[i + gap]){
                T tmp = values[i];
                values[i] = values[i + gap];
                values[i + gap] = tmp;
                swapped = true;
            }
        }
    }
    min = values[0];
    med = values[1];
    max = values[2];
}

template <typename T>
T Triple<T>::minimum() {
    return min;
}

template <typename T>
T Triple<T>::median() {
    return med;
}

template <typename T>
T Triple<T>::maximum() {
    return max;
}

#endif /* defined(__ADSWeek2Lab2__Triple__) */
