#ifndef MKDISK_H
#define MKDISK_H

#include <iostream>
using namespace std;

class mkdisk
{
public:
    mkdisk();
    int size=0;
    string path="";
    string name="";
    void make_mkdisk(mkdisk *disco);
};

#endif // MKDISK_H