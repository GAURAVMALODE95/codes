#include <iostream>
#include <map>
#include <string>
// map stores key value pairs.
using namespace std;
int main()
{
    map<string, int> marks;
    marks["bhardawaj"] = 90;
    marks["raavan"] = 99;
    marks["bubly"] = 94;
    marks["naruto"] = 05;
    cout<<"size of map : "<<marks.size()<<endl;

    map<string, int>::iterator iter;
    for (iter = marks.begin(); iter != marks.end(); iter++)
    {
        cout << (*iter).first << "-> " << (*iter).second << endl;
    }

    return 0;
}