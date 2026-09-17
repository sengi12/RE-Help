#include <map>
#include <iostream>

int main() {
    std::map<int,int> m; 
    m = {{0,1},{2,3},{4,5}}; 

    const int* i;
    for(const std::pair<int,int>& e : m) {
        if (e.first == 2) {
            i = &e.second;
        }
    }
    std::cout << *i;
}