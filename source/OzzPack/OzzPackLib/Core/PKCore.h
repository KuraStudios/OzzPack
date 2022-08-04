// Copyright (C) Kura Studios All Rights Reserved. 
#pragma once
#ifndef GUARD
#define GUARD
//Basic Includes
#define NOMINMAX
#define _CRT_SECURE_NO_WARNINGS
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <cstdio>
#include <cstdint>
#include <thread>   
#include <ctime>
#include <map>
#include <list>
#include <algorithm>
#include <memory>
#include <string>
#include <vector>
#include <cassert>
#include <mutex>
#include <shared_mutex>
#include <functional>
#include <array>
#include <filesystem>
//Deletes the copy constructor and assignment operator
#define DELETE_COPY(className) \
className(const className& other) = delete; \
className& operator=(const className& other) = delete;
#ifndef DISABLE_MOVE
#define DISABLE_MOVE(T)                 \
            explicit T(T&&) = delete;   \
            T& operator=(T&&) = delete;
#endif

#ifndef DISABLE_COPY_AND_MOVE
#define DISABLE_COPY_AND_MOVE(T) DISABLE_COPY(T) DISABLE_MOVE(T)
#endif
#endif
