#include <iostream>

using namespace std;

int main()
{
    char myStr[] = "Halo Dunia";

    char *myPtr = strchr(myStr, 'D');

    cout << myPtr;
}
