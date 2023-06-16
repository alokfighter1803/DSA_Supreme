#include<iostream>
using namespace std;
int main(){
    int a = 5; // Declare and define the variables. Symbol table concept is used
    cout<<a<<endl; // 5 will be displayed as output
    cout<<&a<<endl; // Hexadecimal value will be in the output and this is the address of a. (Access address of a)
    // Creation of pointer
    int b = 6;
    int *ptr = &b; // ptr is a pointer to b which contains integer data
    cout<<*ptr<<endl; // This will print 6 as we have used dereference operator (Access value)
    cout<<&ptr; // Address of ptr block
    char ch = 'a';
    char *ptr1 = &ch;
    cout<<endl;
    cout<<sizeof(ptr)<<endl; // size of pointer will be same for every data type
    cout<<sizeof(ptr1)<<endl;
    int *ptr2; // bad practice
    // Rectifying the above mistake
    int *ptr3 = nullptr;
    int *ptr4 = 0;  // null pointer

    // Copying the pointer to another pointer
    int d = 5;
    int *p = &d;
    int *copy = p; // Copy the pointer to another pointer
    cout<<*copy<<endl; // 5 will be output
    cout<<*p<<endl; // 5 will be output
    // pointer arithemetic 
    p = p + 1;
    cout<<p;
    *p = *p + 1;


        int a = 10;
        int* p = &a;
        int* q = p;
        int* r = q;

        cout << a << endl; //10
        cout << &a << endl; //address of a 
        cout << p << endl; //address of a 
        cout << &p << endl; //address of p
        cout << *p << endl; //10
        cout << q << endl; //address of a
        cout << &q << endl; //address of q
        cout << *q << endl; //10
        cout << r << endl; //address of a
        cout << &r << endl; //address of r
        cout << *r << endl; //10
        cout << (*p + *q + *r) << endl; //30
        cout << (*p)*2 + (*r)*3 << endl; //50
        cout << (*p/2) - (*q)/2 << endl; //0


    return 0;
}