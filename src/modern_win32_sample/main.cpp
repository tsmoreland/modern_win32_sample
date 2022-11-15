#include <iostream>
#include "modern_win32/guid.h"

int main() {
    modern_win32::guid const uuid{modern_win32::new_guid()};
    std::string const uuid_as_string = to_string(uuid);
    std::cout << uuid_as_string << "\n";

    return 0;
}
