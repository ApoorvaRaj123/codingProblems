#include <iostream>
using namespace std;

void findPairs (int arr[], int n, int targetSum)
{
  for (int i = 0; i < n - 1; i++)
    {
      for (int j = i + 1; j < n; j++)
	{
	  if (arr[i] + arr[j] == targetSum)
	    {
	      cout << "Pair found at index " << i << " and " << j << endl;
	    }
	}
    }
}

int main ()
{
  int arr[] = { 5, 8, 1, 4, 6, 3, 2, 7 };
  int n = sizeof (arr) / sizeof (arr[0]);
  int targetSum = 10;
  findPairs (arr, n, targetSum);
  return 0;
}
