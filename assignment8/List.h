#ifndef LIST_H
#define LIST_H
#include "iostream"

template <class T>
class List {
protected:
  T* items;
  int size, current_Index;

public:
  List() {
    size = 10;
    items = new T[size];
    current_Index = -1;
  }

  List(int size) {
    items = new T[size];
    this->size = size;
    current_Index = -1;
  }

  void Add(T data) {
    if (current_Index == size - 1)
      Extend();

    current_Index++;
    items[current_Index] = data;
  }
  void display() {
    for (int i = 0; i <= current_Index; i++) {
      std::cout << items[i] << std::endl;
      /* code */
    }
  }
  T get_Last() {
    if (current_Index == -1) {
      throw "Empty List";
    }
    return items[current_Index];
  }
  T get_Item_By_Index(int index) {
    if (index > current_Index) {
      throw "Index out of range";
    }
    return items[index];
  }
  void remove_Element(int index) {
    if (index > current_Index) {
      throw "Index out of range";
    }
    for (int i = index; i < current_Index; i++) {
      items[i] = items[i + 1];
    }
    current_Index-=1;
  }

  ~List() {
    delete items;
  }

private:
  void Extend() {
    T* temp = new T[size * 2];

    for (int index = 0; index < size; index++) {
      temp[index] = items[index];
    }

    delete items;
    items = temp;
    size *= 2;
  }
};

#endif // LIST_H
