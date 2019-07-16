#include "MinHeap.hpp"

MinHeap(unsigned int cap);

~MinHeap();

int swap(int *a, int *b){
    int t;
    t = *a;
    *a=*b
    *b= t;
}


MinHeap::void swim(){
    int i = size;
    while (i > 0 && arr[i] < arr[i/2]){
        swap(&arr[i], &arr[i/2])
        i/=2;
}

}

void MinHeap::sink(int i){
    int q = i;
    while ()

}

bool MinHeap::search(int i, int data){
    if (arr[i] == data){
        return true;
    }
    if (i < arr[2*i] && i < arr[(2*i)+1]){
        return false;
    }
    return (search(i+1));

}

void MinHeap::erase(int i, int data){
    if (arr[i] == data){
        erase->data;
    }
    if (i < arr[2*i] && i < arr[(2*i)+1]){
        throw "bad";
    }
    return (erase(i+1));
}

void MinHeap::push(int data){
    while (true){
        sink()
    }

}

int MinHeap::count(){

}

int MinHeap::pop(){

}

int MinHeap::peek(){

}

bool MinHeap::search(int data){

}

int MinHeap::remove(int i){

}

void MinHeap::erase(int data){

}

void MinHeap::print(std::ostream& oss = std::cout){

}