#pragma once

#include <iostream>
#include <cstdio>

template <typename T, typename F>
void iter(T *address , const int len , F func);


template <typename T>
void print(const T &value);

template <typename T>
void add(T &value);