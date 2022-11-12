/*
 * @file: github.cpp
 * @author: Dmitry Shpakov
 * @date: 2021-10-29
 * @licence: CC0
 *
 */

// FIXME I have no idea what this piece of code does

#include <github.h>
#include <memory>
#include <iostream>

int main(int argc, char** argv) {
    std::unique_ptr<TVisitor> visitor = new TVisitor(GIT_REPO_VISITOR);

    std::cout << "Welcome dear " << visitor->getName() << "!" << std::endl;
    
    return 0;
}

// XXX Compile with care and -Wall -Werror flags.

// vim: syntax=cpp ts=4 sw=4 sts=4 sr et

