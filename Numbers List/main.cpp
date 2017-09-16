#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

    ifstream infile;
    string uifile;
    cout << "Please provide file name:";
    cin >> uifile;


    infile.open(uifile.c_str());




    //error check

if(infile.fail()){
        cerr << "File could not be opened." << endl;
        return 0;
    }


    int length = 1;
    int item1, item2, itemLast;



    infile >> item1 >> item2;
    itemLast = 0;
    //cout << itemLast;

//while loop to get the lenth of list
    while(!infile.eof()){
        infile >> itemLast;
        length++;
    }

    //cout relevent data

    cout << "There are " << length << " numbers in this file" << endl;
    cout << "first Number " << item1 << endl;
    cout << "second Number " << item2 << endl;
    cout << "last Number " << itemLast << endl;

    return 0;
}
