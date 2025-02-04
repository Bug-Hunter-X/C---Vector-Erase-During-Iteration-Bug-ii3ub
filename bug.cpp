std::vector<int> vec; 
for (int i = 0; i < 10; ++i) {
 vec.push_back(i); 
}
for (int i = 0; i < vec.size(); ++i) {
 int value = vec[i]; 
//some operations on value
 if (value == 5) {
 vec.erase(vec.begin() + i); 
 } 
}
