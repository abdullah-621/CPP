#include <iostream>
#include <vector>
using namespace std;

int main()
{

  // todo : type one

  int row, col;
  cout << "Enter Row : ";
  cin >> row;
  cout << "Enter Columns : ";
  cin >> col;

  vector<vector<int>> matrix(row, vector<int>(col, 0));

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      matrix[i][j] = 10;
    }
  }

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }

  // todo : type two

  vector<vector<int>> vec;

  vec.push_back({1, 2, 3});
  vec.push_back({4, 5, 6});

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < vec[i].size(); j++)
    {
      cout << vec[i][j] << " ";
    }
    cout << endl;
  }

  // todo : type three

  vector<vector<int>> arr;
  int rows;
  cout << "Enter Row : ";
  cin >> rows;
  int columns;
  cout << "Enter columns : ";
  cin >> columns;

  for (int i = 0; i < rows; i++)
  {
    vector<int> temp;

    for (int j = 0; j < columns; j++)
    {
      int value;
      cout << "Enter value : ";
      cin >> value;
      temp.push_back(value);
    }
    arr.push_back(temp);
  }

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < arr[i].size(); j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}