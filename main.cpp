#include <iostream>
#include <vector>

#include <string.h>

using namespace std;

int main()
{
    char str[] = "This is an example string";
    char* ptr = strtok(str, " ");

    while(ptr)
    {
        printf("%s\n", ptr);
        ptr = strtok(NULL, " ");
    }

    return 0;
}