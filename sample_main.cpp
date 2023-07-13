#include "cpuinfo.hpp"

#include <iostream>
using namespace std;

int main()
{
    CPUInfo cinfo;

    cout << "CPU vendor = " << cinfo.vendor() << endl;
    cout << "CPU Brand String = " << cinfo.model() << endl;
    cout << "# of cores = " << cinfo.cores() << endl;
    cout << "# of logical cores = " << cinfo.logicalCpus() << endl;
    cout << "Is CPU Hyper threaded = " << cinfo.isHyperThreaded() << endl;
    cout << boolalpha 
         << "CPU SSE   = " << cinfo.haveSSE() << endl
         << "CPU SSE2  = " << cinfo.haveSSE2() << endl
         << "CPU SSE3  = " << cinfo.haveSSE3() << endl
         << "CPU SSE41 = " << cinfo.haveSSE41() << endl
         << "CPU SSE42 = " << cinfo.haveSSE42() << endl
         << "CPU AVX   = " << cinfo.haveAVX() << endl
         << "CPU AVX2  = " << cinfo.haveAVX2() << endl
    ;

    return 0;
}
