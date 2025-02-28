/**********************************************************
 * HEADER
 **********************************************************/



#include <iostream>   
#include <cctype>     
#include <vector>     
#include <sstream>    

using namespace std;


/*********************************************** Helper functions ***************************************/

//The splitString function takes a line and split it on the delimiter and push the parts into items
void splitString(string line, char delimiter, vector<string>& items ) {
	stringstream s_stream(line);
	while (s_stream.good()) {
		string item;
		getline(s_stream, item, delimiter);
		items.push_back(item);
	}
}

/**********************************************************************************************************/

int run(string titlesFile, string namesFile, string principalsFile) {
	return 0;	
}

int main() {
	//Change these addresses according to your local machine
	string titlesFile =	"movie.titles.tsv";
	string namesFile = "movie.names.tsv";
	string principalsFile = "movie.principals.tsv";

	//DO NOT change the main function. The main function will be removed by the autograder
	run(titlesFile, namesFile, principalsFile);
	return 0;
}

