#include "cache.h"

Cache::Cache(const int size) {
	cache = new long long[size + 1](); 
}

Cache::~Cache() {
	delete[] cache;
	cache = nullptr;
}

long long Cache::fibonacci(long long n)
{
	if (n <= 1) return n;
	if (cache[n] != 0) {
		return cache[n];
	}
	cache[n] = fibonacci(n - 1) + fibonacci(n - 2);
	return fibonacci(n - 1) + fibonacci(n - 2);
}