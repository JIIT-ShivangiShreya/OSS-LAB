#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    std::string str;
    cout<<" ENTER STRING: ";
    cin>> str;
    int n = str.length();
    for (int i = 0; i < n / 2; i++) {
        std::swap(str[i], str[n - i - 1]);
    }
    std::cout << str << std::endl;
    return 0;
}
