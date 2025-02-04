#include <iostream>
#include <vector>

int main() {
 std::vector<int> vec;
 for (int i = 0; i < 10; ++i) {
 vec.push_back(i);
 }

 // Correct way to erase elements during iteration:
 for (auto it = vec.begin(); it != vec.end(); ) {
 int value = *it;
 if (value == 5) {
 it = vec.erase(it);
 } else {
 ++it; 
 }
 }

 for (int value : vec) {
 std::cout << value << " ";
 }
 std::cout << std::endl;
 return 0;
}
