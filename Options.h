#pragma once
#include <iostream>
#include <string>

class Options
{
public:
    Options(int argc, char **argv);
    ~Options();
    //get argument value
    std::string get_value(const char *argv);
    //get argument by index
    std::string get_argv(int index);
    //check if argument provided
    int check(const char *argv);

private:
    char **argv;
    int   argc;
};

