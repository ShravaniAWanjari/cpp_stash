#include <iostream>

int main(){
    int a = 10;
    int b =20;
    int* heapPtr = new int(30);

    std::cout << "Address of a: " << &a << " Address of b" << &b << " Address of the pointer itself "<< &heapPtr << std::endl;

    delete heapPtr;
    return 0;
}