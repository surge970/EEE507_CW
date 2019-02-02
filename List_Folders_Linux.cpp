/**
* @author David A
* https://stackoverflow.com/questions/5043403/listing-only-folders-in-directory
* dirent.h file not available on windows by default, acquired from: 
* https://github.com/tronkko/dirent
* Placed into : 
* C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\VC\Tools\MSVC\14.16.27023\include
*/

#include <dirent.h>
#include <stdio.h>

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
	const char* PATH = "D:\\Media\\Videos\\Movies";

	DIR *dir = opendir(PATH);

	struct dirent *entry = readdir(dir);

	while (entry != NULL)
	{
		if (entry->d_type == DT_DIR)
			printf("%s\n", entry->d_name);

		entry = readdir(dir);
	}

	closedir(dir);

	return 0;
}