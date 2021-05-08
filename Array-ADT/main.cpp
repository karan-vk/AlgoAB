#include <iostream>
struct Array
{
  int A[20];
  int size;
  int length;
};

void Display(struct Array &arr, int index = -1)
{
  int x = 0;
  std::cout << "\nElements are" << std::endl;
  for (int i : arr.A)
  {
    if (index == x)
    {
      std::cout << "->";
    }

    std::cout << i << std::endl;
    if (x == arr.length - 1)
    {
      break;
    }
    x++;
  }
}

void Append(struct Array *arr, int x)
{
  if (arr->length < arr->size)
  {
    arr->A[arr->length++] = x;
  }
}

void Insert(struct Array &arr, int index, int x)
{
  if (index >= 0 && index <= arr.length)
  {
    for (int i = arr.length; i > index; i--)
    {
      arr.A[i] = arr.A[i - 1];
    }
    arr.A[index] = x;
    arr.length++;
  }
}

void Delete(struct Array &arr, int index)
{
  for (int i = index; i < arr.length - 1; i++)
  {
    arr.A[i] = arr.A[i + 1];
  }
}

void LSearch(struct Array &arr, int element)
{

  for (int i = 0; i < arr.length; i++)
  {
    if (arr.A[i] == element)
    {
      std::cout << "Element " << arr.A[i] << " found at index " << i << std::endl;
      Display(arr,i);
      return;
    }
  }
  std::cout << "Element not found or not in the array" << std::endl;
}

int main()
{
  struct Array arr = {{1, 2, 3, 4, 5}, 10, 5};
  // int n, i;
  // std::cout << "Enter size of an array" << std::endl;
  // std::cin >> arr.size;
  // arr.A = new int[arr.size];
  // arr.length = 0;
  // std::cout << "Enter number of numbers" << std::endl;
  // std::cin >> n;
  // std::cout << "Enter all elements" << std::endl;
  // for (int i = 0; i < n; i++)
  // {
  //   std::cin >> arr.A[i];
  // }
  // arr.length = n;
  Append(&arr, 10);
  Insert(arr, 1, 5);
  Delete(arr, 0);
  LSearch(arr, 10);
  Display(arr);
  return 0;
}