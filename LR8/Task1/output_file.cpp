#include "functions.h"

void write_cur(std::ofstream& out, int idx) {
    auto writeString = [&out](const std::string& str) {
        size_t length = str.size();
        out.write(reinterpret_cast<const char*>(&length), sizeof(length));
        out.write(str.data(), length);
    };

    writeString(a[idx].surname);
    writeString(a[idx].name);
    writeString(a[idx].papa);
    out.write(reinterpret_cast<const char*>(&a[idx].number), sizeof(a[idx].number));
    writeString(a[idx].post);
    out.write(reinterpret_cast<const char*>(&a[idx].data), sizeof(a[idx].data));
}

void output_file() {
    std::ofstream file("output.bin", std::ios::binary);
    file.write(reinterpret_cast<const char*>(&n), sizeof(n));

    for (int i = 0; i < n; i++) {
        write_cur(file, i);
    }

    file.close();
}