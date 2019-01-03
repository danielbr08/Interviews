#include <iostream>
#include "template.h"

template<class T>
 Dou<T>::Dou() { }

template<class T>
T Dou<T>::getFirst() { return first; }

template<class T>
T Dou<T>::setFirst(T first) { this->first = first;}
