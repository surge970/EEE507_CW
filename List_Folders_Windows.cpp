/** 
* @author Shreevardhan
* https://stackoverflow.com/questions/612097/how-can-i-get-the-list-of-files-in-a-directory-using-c-or-c/37494654#37494654
* This script will print the paths to all subdirectories of the given folder
*/


#include <string>
#include <iostream>
#include <filesystem>
namespace fs = std::filesystem;



int main()
{
	std::string dirMovies = "D:\\Media\\Videos\\Movies";
	for (const auto & entry : fs::directory_iterator(dirMovies))
	std::cout << entry.path() << std::endl;

	return 0;


}