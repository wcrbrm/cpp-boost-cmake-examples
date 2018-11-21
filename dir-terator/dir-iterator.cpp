#include <iostream>
#include <string>
#include <boost/filesystem.hpp>
#include <boost/range/iterator_range.hpp>

using namespace boost::filesystem;

int main(int argc, char *argv[])
{
    path p(argc > 1 ? argv[1] : ".");
    if(is_directory(p)) {
        std::cout << p << " contains the following:\n\n";
        for(auto& entry : boost::make_iterator_range(directory_iterator(p), {})) {
            if (!is_directory(entry)) {
                std::string path = entry.path().string();
                if (path.find("./") == 0) {
                    boost::system::error_code ec;
                    boost::uintmax_t filesize = file_size(entry, ec);
                    std::cout << entry << ", " << filesize << " bytes\n";
                }
            }
        }
    }
}
