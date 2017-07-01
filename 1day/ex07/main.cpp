#include <iostream>
#include <fstream>

void replaceAll(std::string& str, const std::string& from, const std::string& to) {
    if(from.empty())
        return;
    size_t start_pos = 0;
    while((start_pos = str.find(from, start_pos)) != std::string::npos) {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length();
    }
}

int     main(int argc, char *argv[]) {

    std::string buf;
    std::string path;

    if (argc == 4) {
        std::ifstream   infile(argv[1]);
        if (!infile.is_open()) {
            std::cout << "Invalid file" << std::endl;
            return 0;
        }
        path = argv[1];
        std::ofstream   outfile(path + ".replace");
        while (std::getline(infile, buf)) {
            replaceAll(buf, argv[2], argv[3]);
            outfile << buf << std::endl;
        }
        infile.close();
        outfile.close();
    } 
    else
        std::cout << "Wrong count argc" << std::endl;
    return 0;
}
