#include <unordered_set>
#include <iostream>

int main() {
    std::unordered_set<std::string> set;
    set = {{"hello", "stop-the-"}};

    for (auto x : set) { 
        std::cout << (x + "world") << '\n';
    }
}