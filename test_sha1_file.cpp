/*
    test_sha1_file.cpp - tests are intentionally split in two files.
    The purpose of the split is to test linking of multiple files that include sha1.hpp.

    ============
    SHA-1 in C++
    ============

    100% Public Domain.

    Original C Code
        -- Steve Reid <steve@edmweb.com>
    Small changes to fit into bglibs
        -- Bruce Guenter <bruce@untroubled.org>
    Translation to simpler C++ Code
        -- Volker Diels-Grabsch <v@njh.eu>
    Header-only library
        -- Zlatko Michailov <zlatko@michailov.org>
*/

#include "sha1.hpp"
#include "sha1.hpp" // Intentionally included twice for testing purposes
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

/*
 * Produce same output as "sha1sum -b"
 */
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-function"
#pragma clang diagnostic ignored "-Wmissing-prototypes"
void test_file(string const &filename) { cout << SHA1::from_file(filename) << " *" << filename << endl; }
#pragma clang diagnostic pop
