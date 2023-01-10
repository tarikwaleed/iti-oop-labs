#ifndef ADVANCEDLIST_H
#define ADVANCEDLIST_H

#include "List.h"
#include "iostream"

template <class T>
class AdvancedList : public List<T> {
public:
  int legth;
  AdvancedList();
  void remove_Element(T data);
  T get_Last();
  T get_By_Index();
  // friend std::ostream& operator<<(std::ostream& stream, const List<T>& list);
};
template <class T>
void AdvancedList<T>::remove_Element(T data) {
}

// template <class T>
// std::ostream& operator<<(std::ostream& stream, const List<T>& list) {
//   for (int i = 0; i < List<T>::size; i++) {
//     stream << "Hello" << std::endl;
//   }
//   return stream;
// }

#endif // ADVANCEDLIST_H
