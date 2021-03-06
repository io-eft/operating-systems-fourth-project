#ifndef __MYINODE__HPP
#define __MYINODE__HPP
#include <iostream>
#include<sys/types.h>
#include <string>
#include <time.h>
#include <sys/stat.h>

class MyINode
{
    std::string name;
    long iNodeNumber;
    long links;
    long fileSize;
    long lastModification;
    mode_t mode;
    bool upToDate;
    
    public:
	MyINode(struct stat s, const char* n);
	MyINode(long s, const char* n);
	~MyINode();
	
	void print();

	void setUpToDate();
	
	std::string getName();
	long getINodeNumber();
	long getLinks();
	long getFileSize();
	long getLastModification();
	mode_t getMode();
	bool isUpdated();
};


#endif

