#include <cstring>
#include <iostream>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include "sensorDataReceiver.hpp"

using namespace std;

int readDataFromConsole(char readBuffer[])
{
    memset(readBuffer, 0, MAX_BUFFER_SIZE);
    read(STDIN_FILENO, readBuffer, MAX_BUFFER_SIZE-1);
    cout<<readBuffer;
    return strlen(readBuffer);
}

int main()
{
    char readBuffer[MAX_BUFFER_SIZE];
    readDataFromConsole(readBuffer);
    return 0;
}
