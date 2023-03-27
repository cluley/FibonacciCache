#pragma once
#include <fstream>

class Cache {
public:
	Cache(const int size);
	~Cache();
	long long fibonacci(long long n);
private:
	long long* cache;
};