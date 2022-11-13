//create memory leak funct
#ifndef ARRAY_LIST_H
#define ARRAY_LIST_H

class ArrayList 
{
    public:
    ArrayList(int* array, int size) : elements(array) {this-> size;}
    int size()const{return current_index;}
    void add(int value);
    int capacity()const{return size;}
    int Get_Value_at_Index(int index){return }
}