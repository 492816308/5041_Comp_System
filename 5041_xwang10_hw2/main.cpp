/**
 * This program is to recreate the memory dump of some given variables. Pointers are used to display the values
 * of each byte of the contents.
 *
 * author: Xiaoyu Wang
 * version: 1.0
 */

#include <iostream>
using namespace std;

int main() {

    typedef struct {
        char a; int b; char c[6]; char* d;
    } my_thing;

    my_thing x = {
    'A', 0xFF, "hello", "world"
    };

    // Pointer to the structure and its size
    unsigned char *ptr = (unsigned char*) &x;
    size_t size = sizeof(x);

    // on a 64-bit system, pointers are typically 8 bytes.
    // A  for loop to print the values of each byte of the contents of the x variable.
    printf("Bytes of x:\n");
    for (size_t i = 0; i < size; i++) {
        // Print each byte as 2-digit hexadecimal
        printf("%02X ", ptr[i]);
        // Print a newline after every 4 bytes
        if((i + 1) % 4 == 0) {
            printf("\n");
        }
    }
    cout << endl;

    cout << "The size of a is: " << sizeof(x.a) << endl;
    cout << "The size of b is: " << sizeof(x.b) << endl;
    cout << "The size of c is: " << sizeof(x.c) << endl;
    cout << "The size of d is: " << sizeof(x.d) << endl;
    std::cout << "The size of x is: " << sizeof(x) << std::endl;
    return 0;
}
