// Copyright 2022 Zaharov Anton

#include <sstream>
#include <iterator>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

#include "include/heap_application.h"

std::string HeapApplication::getHelp(const std::string& appname) {
        return  "This is an application for add value in fibonachi heap\n" \
        "Format for arguments:\n" +
        appname + " <value> "
        "Where all arguments are integer";
}

std::string HeapApplication::operator()(int argc, const char** argv) {
    int value;

    if (argc == 1)
        return getHelp(argv[0]);

    try {
        if (argc > 2) {
            std::string error_msg = "Error occured: ";
            error_msg += "Should be 1 arguments.\n";
            throw std::runtime_error(error_msg);
        }
        value = parseArgument(argv[1]);
    }
    catch (std::exception& exp) {
        return exp.what();
    }

    std::ostringstream oss;
    FibHeap heap;
    heap.insert(value);
    oss << heap.extract_min();
    return oss.str();
}

bool HeapApplication::checkArgument(const std::string& str) {
    for (size_t i = 0; i < str.size(); i++) {
        if (str[i] < '0' || str[i] > '9')
            return false;
    }
    return true;
}

int HeapApplication::parseArgument(const char* arg) {
    if (!checkArgument(arg))
        throw std::runtime_error("Error occured: Wrong argument type.\n");
    return std::stoi(arg);
}
