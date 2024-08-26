#include <iostream>
using namespace std;

void leftRotate (int arr[], int n, int d)
{
  int temp[d];
  for (int i = 0; i < d; i++)
    {
      temp[i] = arr[i];
    }
  for (int i = d; i < n; i++)
    {
      arr[i - d] = arr[i];
    }
  for (int i = n - d, j = 0; i < n; i++, j++)
    {
      arr[i] = temp[j];
    }
}

void rightRotate (int arr[], int n, int d)
{
  int temp[d];
  for (int i = n - d, j = 0; i < n; i++, j++)
    {
      temp[j] = arr[i];
    }
  for (int i = n - d - 1; i >= 0; i--)
    {
      arr[i + d] = arr[i];
    }
  for (int i = 0; i < d; i++)
    {
      arr[i] = temp[i];
    }
}

int main ()
{
  int arr[] = { 1, 2, 3, 4, 5 };
  int n = sizeof (arr) / sizeof (arr[0]);
  int d = 2;

  cout << "Original Array: ";
  for (int i = 0; i < n; i++)
    {
      cout << arr[i] << " ";
    }
  cout << endl;

  leftRotate (arr, n, d);
  cout << "Left Rotated Array: ";
  for (int i = 0; i < n; i++)
    {
      cout << arr[i] << " ";
    }
  cout << endl;

  rightRotate (arr, n, d);
  cout << "Right Rotated Array: ";
  for (int i = 0; i < n; i++)
    {
      cout << arr[i] << " ";
    }
  cout << endl;

  return 0;
}
