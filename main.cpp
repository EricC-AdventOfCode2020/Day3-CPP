#include <iostream>
#include <string>
#include <vector>
#include "utility.h"

using namespace std;

int part_1(const vector<string> data);
long part_2(vector<string> data);

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
long part_2(vector<string> data)
{
    long sum = 1;
    long count = 0;

    // y = x
    for (int i = 0, right = 0; i < data.size(); i++, right = (right + 1) % data[i].length())
    {
        if (data[i][right] == '#')
        {
            count++;
        }
    }

    sum *= count;
    count = 0;

    // y = x / 3
    for (int i = 0, right = 0; i < data.size(); i++, right = (right + 3) % data[i].length())
    {
        if (data[i][right] == '#')
        {
            count++;
        }
    }

    sum *= count;
    count = 0;

    // y = x / 5
    for (int i = 0, right = 0; i < data.size(); i++, right = (right + 5) % data[i].length())
    {
        if (data[i][right] == '#')
        {
            count++;
        }
    }

    sum *= count;
    count = 0;

    // y = x / 7
    for (int i = 0, right = 0; i < data.size(); i++, right = (right + 7) % data[i].length())
    {
        if (data[i][right] == '#')
        {
            count++;
        }
    }

    sum *= count;
    count = 0;

    // y = 2x
    for (int i = 0, right = 0; i < data.size(); i *= 2, right = (right + 1) % data[i].length())
    {
        if (data[i][right] == '#')
        {
            count++;
        }
    }

    sum *= count;

    return sum;
}