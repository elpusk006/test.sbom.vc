
#include <iostream>
#include <boost/filesystem.hpp>

int main()
{
    std::cout << "Hello World!\n";

	boost::filesystem::path p = "/usr/local/bin";
	std::cout << p << " path." << std::endl;
	return 0;
}

