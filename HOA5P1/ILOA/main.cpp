#include <iostream>
#include <queue>

void display(std::queue<char> copyQ);

int main(){

    std::queue<char> myQ;

    myQ.push('T');
    myQ.push('I');
    myQ.push('N');
    std::cout << "current front is: " << myQ.front() << std::endl;
    std::cout << "current back is: " << myQ.back() << std::endl;
}