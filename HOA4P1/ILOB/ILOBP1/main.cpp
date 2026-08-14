#include <iostream>

//global declaration

//defining max value
#define maxCap 10 
//const size_t arrSize = 10;

//capacity of stack
int stackArr[maxCap]; 

//define top variable, stores new data
int top = -1, newData;

void push();
void pop();
void Top();
bool isEmpty();
bool isFull();
void Display();

//prototype functions

int main() {
//main driver
    
    int choice;

    while(true) {
        std::cout << "-------------------------------------------" << std::endl;
        std::cout << "Stack Operations: " << std::endl;
        std::cout << "(1)Push (2)Pop (3)Top (4)isEmpty (5)isFull (6)Display Stack" << std::endl;
        std::cout << "-------------------------------------------" << std::endl;
        std::cout << "Enter: ";
        std::cin >> choice;

        switch(choice){
            case 1: push(); 
            break;

            case 2: pop();
            break;

            case 3: Top();
            break;

            case 4:
                std::cout << "is stack empty? " << isEmpty() << std::endl;
            break;

            case 5:
                std::cout << "is stack full? " << isFull() << std::endl;                
            break;

            case 6:
                std::cout << "Displaying Stack: "<< std::endl;      
                Display();          
            break;
            
            default: 
                std::cout << "Invalid choice" << std::endl;
            break;

        }
    }

}

//function definition

bool isEmpty() {

    //how to verify if stack is empty

    if(top == -1) return true;

    return false;

}

bool isFull() {

    if(top == (maxCap -1)) return true;
    return false;

}

void push() { //add to stack
    //error checking
    if(isFull()) {
        std::cout << "Stack Overflow" << std::endl;
        return;
    }

    //pushing to the stack
    std::cout << "Enter a new value: ";
    std::cin >> newData;
    
    //how to insert data in the stack?
    stackArr[++top] = newData;

}

void pop() { //sets top to previous data from the top
    //error checking
    if(isEmpty()) {
        std::cout << "Stack Underflow" << std::endl;
        return;
    }

    //display the value that is going to pop
    std::cout << "Popping: " << stackArr[top] << std::endl;

    //decrement the top value from the stack
    top--;

}

void Top() {
    //error catching
    if(isEmpty()) {
        std::cout << "Stack is empty." << std::endl;
        return;
    }

    //check the top value 
    std::cout<< "Top element: " << stackArr[top] << std::endl;


}

void Display() {

    for(int i = top; i >= 0; i--) {
        std::cout << stackArr[i] << std::endl;        
    }

}