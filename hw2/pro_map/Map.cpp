#include "Map.h"
#include "Pair.h"
#include <string>
#include <iostream>
using namespace std;

Map::Map(int n){
    data = new Pair[n];
    sz = 1;
}

int Map::size(){
//    for (int i=0;i<nn;i++){
//        if (data[i].hasKey(NULL)!=0){
//            data[i].~Pair();
//        }
//    }
    return sz-1;
}

Map::~Map(){
    delete []data;
}