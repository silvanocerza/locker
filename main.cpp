#include <iostream>

#ifdef _MSC_VER
#include <Windows.h>
#else
#include <unistd.h>
#endif

#include "lock.h"

int main()
{
    cleanLockFile();

    std::cout << processId() << std::endl;
    if (!isOnlyInstance()) {
        std::cout << "Another process is running" << std::endl;
    }
    lockProcess();

#ifdef _MSC_VER
	Sleep(5000);
#else
    ::sleep(5);
#endif
    unlockProcess();
    return 0;
}