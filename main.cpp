#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int liczba;

int main()
{
    srand(time(NULL));
    liczba = rand()%2;
    cout<<liczba<<endl;
    return 0;
}
