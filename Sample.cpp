#include "Options.h"

int main(int argc, char **argv)
{
    Options opts(argc, argv);
    if (!opts.check("--arg1") && !opts.check("--arg2")) {
        std::cout << "--arg1 and --arg2 are required." << std::endl;
        return -1;
    }
    std::string arg1 = opts.get_value("--arg1");
    return 0;
}
