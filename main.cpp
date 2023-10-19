#include <iostream>
#include <string>
#include <vector>
#include "utility.h"

using namespace std;

int part_1(const vector<string> data);
long part_2(vector<string> data);
int go_down_slope(vector<string> data, int down, int right);

int main()
{
    vector<string> data = read_input("./input");

    cout << "Part 1: " << part_1(data) << endl;
    cout << "Part 2: " << part_2(data) << endl;
}

int go_down_slope(const vector<string> data, int down, int rightMove)
{
    int count = 0;

    for (int i = 0, right = 0; i < data.size(); i = i + down, right = (right + rightMove) % data[i].length())
    {
        if (data[i][right] == '#')
            count++;
    }

    return count;
}

int part_1(const vector<string> data)
{
    int count = go_down_slope(data, 1, 3);
    return count;
}

// infinite loop when calling this???
long part_2(vector<string> data)
{
    long sum = 1;
    int count = go_down_slope(data, 1, 1);

    sum *= count;

    count = go_down_slope(data, 1, 3);
    sum *= count;

    count = go_down_slope(data, 1, 5);
    sum *= count;

    count = go_down_slope(data, 1, 7);
    sum *= count;

    count = go_down_slope(data, 2, 1);
    sum *= count;

    return sum;
}