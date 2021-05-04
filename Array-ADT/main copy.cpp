#include <iostream>
struct Array
{
  int A[20];
  int size;
  int length;
};

void Display(struct Array &arr)
{
  std::cout << "\nElements are" << std::endl;
  for (auto &&i : arr.A)
  {
    std::cout << arr.A[i] << std::endl;
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
  Display(arr);
  return 0;
}