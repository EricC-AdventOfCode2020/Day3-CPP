#include <iostream>
#include <string>
#include <vector>
#include "utility.h"

using namespace std;

int part_1(const vector<string> data);
long part_2(const vector<string> data);

int main()
{
    vector<string> data = read_input("./input");

    cout << "Part 1: " << part_1(data) << endl;
    cout << "Part 2: " << part_2(data) << endl;
}

int part_1(const vector<string> data)
{
    int count = 0;

    for (int i = 0, right = 0; i < data.size(); i++, right = (right + 3) % data[i].length())
    {
        if (data[i][right] == '#')
        {
            count++;
        }
    }
    return count;
}
long part_2(const vector<string> data)
{

}