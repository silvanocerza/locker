#include <iostream>

#include "lock.h"

int main()
{
    // cleanLockFile();

    std::cout << processId() << std::endl;
    if (!isOnlyInstance()) {
        std::cout << "Another process is running" << std::endl;
    }
    lockProcess();

    ::sleep(5);
    unlockProcess();
    return 0;
}