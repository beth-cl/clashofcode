#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    string t;
    string word = "the";
    getline(cin, t);
    int i;
    int position = 0;
    int numfound = 0;
    t = tolower(t)
    

    //bool isfound = t.find(word);

    //if (isfound == false){
	//	cout << "" << word << " does not exist in the sentence" << endl;
    //}

    while ((i = t.find(word, position)) != string::npos)
    {
        // printing the index where the substring is found
        numfound ++;
        position = i + 1; // initializing the value of position again to the next element after the match is found
    }


    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << numfound << endl;
}
