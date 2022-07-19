// Copyright 2022 Koshelev Sergey

#ifndef MODULES_ZAHAROV_FIB_HEAP_INCLUDE_HEAP_APPLICATION_H_
#define MODULES_ZAHAROV_FIB_HEAP_INCLUDE_HEAP_APPLICATION_H_

#include <string>

#include "include/fib_heap.h"

class HeapApplication {
 private:
     std::string getHelp(const std::string& appname);
     bool checkArgument(const std::string& str);
     int parseArgument(const char* arg);
 public:
     std::string operator()(int argc, const char** argv);
};

#endif  // MODULES_ZAHAROV_FIB_HEAP_INCLUDE_HEAP_APPLICATION_H_
