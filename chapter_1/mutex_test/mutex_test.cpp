// mutex_test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <mutex>

void read(int x) {}
void write(int x) {}
void sum(int x) {}

int main()
{
    int x = 0, y = 0;

    std::recursive_mutex mx;
    {
        std::lock_guard<std::recursive_mutex> lock(mx);
        srand(0);
        read(x);
        write(y);
        sum(x);
    }

    return 0;
}

