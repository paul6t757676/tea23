#include <fmt/chrono.h>
#include <fmt/format.h>

#include "config.h"
int globalVar=1;
int bss1=5;
void foo(){
    fmt::print("Hello from foo!\\n");

}
int main(int argc, char **argv) {

    int localVar=2;
    static int staticVar=3;
    const int constVar=4;

    int* heapVar=new int(3);

    /**
     * The {fmt} lib is a cross platform library for printing and formatting text
     * it is much more convenient than std::cout and printf
     * More info at https://fmt.dev/latest/api.html
     */

    fmt::print("Hello, {}!\n", tea::PROJECT_NAME);

    /* INSERT YOUR CODE HERE */
    fmt::println("Global variable value: {}", globalVar);
    fmt::println("Adresse: {}",fmt::ptr(&globalVar));
    fmt::println("Bss1 value: {}", bss1);
    fmt::println("Adresse: {}", fmt::ptr(&bss1));

    fmt::println("localVar value: {}", localVar);
    fmt::println("Adresse: {}", fmt::ptr(&localVar));
    fmt::println("staticVar value: {}", staticVar);
    fmt::println("Adresse: {}", fmt::ptr(&staticVar));
    fmt::println("constVar value: {}", constVar);
    fmt::println("Adresse: {}", fmt::ptr(&constVar));

    fmt::println("heapVar value: {}", *heapVar);
    fmt::println("Adresse: {}", fmt::ptr(heapVar));

    fmt::print("Adresse von foo: {}\n", fmt::ptr(&foo));

    delete heapVar;
    return 0; /* exit gracefully*/
}
