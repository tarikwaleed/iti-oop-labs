#include "List.h"
#include <iostream>
int main(int argc, char const* argv[]) {
  List<int> al;
    al.Add(1);
    al.Add(2);
    al.Add(3);
    al.Add(4);
    al.Add(5);
    al.Add(6);
  try {

    int result = al.get_Last();
    std::cout << result << std::endl;
  } catch (const char* msg) {
    // std::cerr << e.what() << '\n';
    std::cout << msg << std::endl;
  }
  //   try {
  //     int result = al.get_Item_By_Index(6);
  //     std::cout << result << std::endl;
  //   } catch (const char* msg) {
  //     std::cout << msg << std::endl;
  //   }
//   std::cout << "Elements before delete" << std::endl;
//   al.display();
//   try {
//     al.remove_Element(2);
//     std::cout << "Elements after delete" << std::endl;
//     al.display();
//   } catch (const char* msg) {
//     std::cout << msg << std::endl;
//   }

  return 0;
}
