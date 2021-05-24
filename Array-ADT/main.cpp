#include <iostream>
struct Array
{
  int A[20];
  int size;
  int length;
};

void swap(int &x, int &y)
{
  int temp = x;
  x = y;
  y = temp;
}

void Display(struct Array &arr, int index = -1)
{
  int x = 0;
  std::cout << "\nElements are" << std::endl;
  for (int i : arr.A)
  {
    if (x == arr.length)
    {
      break;
    }
    if (index == x)
    {
      std::cout << "->";
    }

    std::cout << i << std::endl;
    x++;
  }
}

void Append(struct Array *arr, int key)
{
  if (arr->length < arr->size)
  {
    arr->A[arr->length++] = key;
  }
}

void Insert(struct Array &arr, int index, int key)
{
  if (index >= 0 && index <= arr.length)
  {
    for (int i = arr.length; i > index; i--)
    {
      arr.A[i] = arr.A[i - 1];
    }
    arr.A[index] = key;
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
      Display(arr, i);
      if (i - 1 >= 0)
      {
        swap(arr.A[i - 1], arr.A[i]);
      }

      return;
    }
  }
  std::cout << "Element not found or not in the array" << std::endl;
}

int BSearch(struct Array &arr, int key)
{
  int l, mid, h;
  l = 0;
  h = arr.length - 1;
  while (l <= h)
  {
    mid = (l + h) / 2;
    if (key == arr.A[mid])
      return mid;

    else if (key < arr.A[mid])
      h = mid - 1;

    else
      l = mid + 1;
  }
  return -1;
}

int recursive_binary_serarch(int a[], int l, int h, int key)
{
  int mid;
  if (l <= h)
  {
    mid = (l + h) / 2;
    if (key == a[mid])
      return mid;
    else if (key < a[mid])
      return recursive_binary_serarch(a, l, mid - 1, key);
    else
      return recursive_binary_serarch(a, mid + 1, h, key);
  }
  return -1;
}

int get(struct Array &arr, int index)
{
  if (index < arr.length && index >= 0)
  {
    return arr.A[index];
  }

  return -1;
}
int set(struct Array &arr, int index, int key)
{
  if (index < arr.length && index >= 0)
  {
    return arr.A[index] = key;
  }

  return -1;
}

int max(struct Array &arr)
{
  int max = arr.A[0];
  for (int i = 1; i < arr.length; i++)
  {
    if (arr.A[i] > max)
    {
      max - arr.A[i];
    }
  }

  return max;
}
int min(struct Array &arr)
{
  int min = arr.A[0];
  for (int i = 1; i < arr.length; i++)
  {
    if (arr.A[i] < min)
    {
      min - arr.A[i];
    }
  }

  return min;
}

int sum(struct Array &arr)
{
  int sum = 0;
  for (int &i : arr.A)
  {
    sum += i;
  }
  return sum;
}
float avg(struct Array &arr)
{
  return (float)sum(arr) / arr.length;
}

void reverse(struct Array &arr)
{
  int i;
  // int *B = (int *)malloc(arr.length * sizeof(int));
  int *B = new int[arr.length];
  for (i = 0; i < arr.length; i++)
  {
    B[i] = arr.A[arr.length - i - 1];
  }

  for (i = 0; i < arr.length; i++)
  {
    arr.A[i] = B[i];
  }
}

void reverseSwap(struct Array &arr)
{
  for (int i = 0; i < arr.length / 2; i++)
  {
    swap(arr.A[i], arr.A[arr.length - i - 1]);
  }
}
void shiftLeft(struct Array &arr)
{
  for (int i = 0; i < arr.length; i++)
  {
    arr.A[i] = arr.A[i + 1];
  }
}
void shiftRight(struct Array &arr)
{
  for (int i = arr.length - 1; i >= 0; i--)
  {
    arr.A[i] = arr.A[i - 1];
  }
}

void rotateLeft(struct Array &arr)
{
  int first = arr.A[0];
  // for (int i = 0; i < arr.length; i++)
  // {
  //   arr.A[i] = arr.A[i + 1];
  // }
  shiftLeft(arr);
  arr.A[arr.length - 1] = first;
}
void rotateRight(struct Array &arr)
{
  int last = arr.A[arr.length - 1];
  // for (int i = arr.length - 1; i >= 0; i--)
  // {
  //   arr.A[i] = arr.A[i - 1];
  // }
  shiftRight(arr);
  arr.A[0] = last;
}

void simpleDisplay(struct Array &arr)
{
  for (int i = 0; i < arr.length; i++)
  {
    std::cout << arr.A[i] << std::endl;
  }
  std::cout << std::endl;
}
void insertSorted(struct Array &arr, int key)
{
  int i;
  for (i = arr.length - 1; (i >= 0 && arr.A[i] > key); i--)
  {
    arr.A[i + 1] = arr.A[i];
  }
  arr.A[i + 1] = key;
  arr.length++;
}
void rearange(struct Array &arr)
{
  int i, j;
  i = 0;
  j = arr.length - 1;
  while (i > j)
  {
    while (arr.A[i] < 0)
      i++;
    while (arr.A[i] >= 0)
      j--;
    if (i < j)
      swap(arr.A[i], arr.A[j]);
  }
}

void seperate(struct Array &arr)
{
  int i, j;
  i = 0;
  j = arr.length - 1;
  for (i, j; i < arr.length / 2; i++)
  {
    if (arr.A[i] > arr.A[j])
    {
      swap(arr.A[i], arr.A[j]);
    }
    j--;
  }
}
bool isSorted(struct Array &arr)
{
  int n = arr.length;
  if (n == 0 || n == 1)
    return true;

  for (int i = 1; i < n; i++)

    if (arr.A[i - 1] > arr.A[i])
      return false;

  return true;
}

struct Array merge(struct Array a, struct Array b)
{
  int i, j, m, n;
  i = 0;
  j = 0;
  m = a.length;
  n = a.length;
  struct Array c = {{}, 200, 0};
  while (i < m && j < n)
  {
    if (a.A[i] < b.A[j])
    {
      Append(&c, a.A[i++]);
    }
    else
    {
      Append(&c, b.A[j++]);
    }
  }

  for (; i < m; i++)
  {
    Append(&c, a.A[i]);
  }
  for (; j < m; j++)
  {
    Append(&c, b.A[j]);
  }

  return c;
}

int main()
{
  struct Array arrc = {{1, 2, 3, 4, 59}, 10, 5};
  struct Array arrc1 = {{6, 8, 80, 65, 80}, 10, 5};
  // insertSorted(arrc, 4);
  int x = 5;

  swap(arrc.A[1], arrc.A[3]);
  struct Array c = merge(arrc, arrc1);
  simpleDisplay(c);

  return 0;
}