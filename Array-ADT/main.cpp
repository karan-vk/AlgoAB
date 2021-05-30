#include <iostream>
#include <vector>
#include <algorithm>
class Array
{
private:
  int *A;
  int size;
  int length;
  void swap(int &x, int &y);

public:
  Array()
  {
    size = 10;
    length = 0;
    A = new int[size];
  }
  Array(int sz)
  {
    size = sz;
    length = 0;
    A = new int[sz];
  }
  ~Array()
  {
    delete[] A;
  }
  void Display(int index);
  void Append(int key);
  void Insert(int index, int key);
  int Delete(int index);
  int LSearch(int element);
  int BSearch(int key);
  int recursive_binary_serarch(int a[], int l, int h, int key);
  int get(int index);
  int set(int index, int key);
  int max();
  int min();
  int sum();
  float avg();
  void reverse();
  void reverseSwap();
  void shiftLeft();
  void shiftRight();
  void rotateLeft();
  void rotateRight();
  void simpleDisplay();
  void insertSorted(int key);
  void rearange();
  void seperate();
  bool isSorted();
  Array merge(Array b);
  Array unionVec(Array &b);
  Array unionFor(Array &b);
  Array Intersection(Array &b);
  Array Difference(Array &b);
};

void Array::swap(int &x, int &y)
{
  int temp = x;
  x = y;
  y = temp;
}

void Array::Display(int index = -1)
{
  int x = 0;
  std::cout << "\nElements are" << std::endl;
  for (int i = 0; i < length - 2; i++)
  {

    if (index == x)
    {
      std::cout << "->";
    }

    std::cout << A[i] << std::endl;
    x++;
  }
}

void Array::Append(int key)
{
  if (length < size)
  {
    A[length++] = key;
  }
}

void Array::Insert(int index, int key)
{
  if (index >= 0 && index <= length)
  {
    for (int i = length; i > index; i--)
    {
      A[i] = A[i - 1];
    }
    A[index] = key;
    length++;
  }
}

int Array::Delete(int index)
{
  for (int i = index; i < length - 1; i++)
  {
    A[i] = A[i + 1];
  }
  return index;
}

int Array::LSearch(int element)
{

  for (int i = 0; i < length; i++)
  {
    if (A[i] == element)
    {
      std::cout << "Element " << A[i] << " found at index " << i << std::endl;
      Display(i);
      // if (i - 1 >= 0)
      // {
      //   swap(A[i - 1], A[i]);
      // }

      return i;
    }
  }
  std::cout << "Element not found or not in the array" << std::endl;
  return -1;
}

int Array::BSearch(int key)
{
  int l, mid, h;
  l = 0;
  h = length - 1;
  while (l <= h)
  {
    mid = (l + h) / 2;
    if (key == A[mid])
      return mid;

    else if (key < A[mid])
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

int Array::get(int index)
{
  if (index < length && index >= 0)
  {
    return A[index];
  }

  return -1;
}

int Array::set(int index, int key)
{
  if (index < length && index >= 0)
  {
    return A[index] = key;
  }

  return -1;
}

int Array::max()
{
  int max = A[0];
  for (int i = 1; i < length; i++)
  {
    if (A[i] > max)
    {
      max = A[i];
    }
  }

  return max;
}
int Array::min()
{
  int min = A[0];
  for (int i = 1; i < length; i++)
  {
    if (A[i] < min)
    {
      min = A[i];
    }
  }

  return min;
}

int Array::sum()
{
  int sum = 0;
  for (int i = 0; i < length; i++)
  {
    sum += A[i];
  }
  return sum;
}
float Array::avg()
{
  return (float)sum() / length;
}

void Array::reverse()
{
  int i;
  // int *B = (int *)malloc(length * sizeof(int));
  int *B = new int[length];
  for (i = 0; i < length; i++)
  {
    B[i] = A[length - i - 1];
  }

  for (i = 0; i < length; i++)
  {
    A[i] = B[i];
  }
}

void Array::reverseSwap()
{
  for (int i = 0; i < length / 2; i++)
  {
    swap(A[i], A[length - i - 1]);
  }
}
void Array::shiftLeft()
{
  for (int i = 0; i < length; i++)
  {
    A[i] = A[i + 1];
  }
}
void Array::shiftRight()
{
  for (int i = length - 1; i >= 0; i--)
  {
    A[i] = A[i - 1];
  }
}

void Array::rotateLeft()
{
  int first = A[0];
  // for (int i = 0; i < arr.length; i++)
  // {
  //   arr.A[i] = arr.A[i + 1];
  // }
  shiftLeft();
  A[length - 1] = first;
}
void Array::rotateRight()
{
  int last = A[length - 1];
  // for (int i = arr.length - 1; i >= 0; i--)
  // {
  //   arr.A[i] = arr.A[i - 1];
  // }
  shiftRight();
  A[0] = last;
}

void Array::simpleDisplay()
{
  for (int i = 0; i < length; i++)
  {
    std::cout << A[i] << std::endl;
  }
  std::cout << std::endl;
}
void Array::insertSorted(int key)
{
  int i;
  for (i = length - 1; (i >= 0 && A[i] > key); i--)
  {
    A[i + 1] = A[i];
  }
  A[i + 1] = key;
  length++;
}
void Array::rearange()
{
  int i, j;
  i = 0;
  j = length - 1;
  while (i > j)
  {
    while (A[i] < 0)
      i++;
    while (A[i] >= 0)
      j--;
    if (i < j)
      swap(A[i], A[j]);
  }
}

void Array::seperate()
{
  int i, j;
  i = 0;
  j = length - 1;
  for (i, j; i < length / 2; i++)
  {
    if (A[i] > A[j])
    {
      swap(A[i], A[j]);
    }
    j--;
  }
}
bool Array::isSorted()
{
  int n = length;
  if (n == 0 || n == 1)
    return true;

  for (int i = 1; i < n; i++)

    if (A[i - 1] > A[i])
      return false;

  return true;
}

Array Array::merge(Array b)
{
  int i, j, m, n;
  i = 0;
  j = 0;

  Array c = Array(length + b.length);
  while (i < length && j < b.length)
  {
    if (A[i] < b.A[j])
    {
      c.Append(A[i++]);
    }
    else
    {
      c.Append(b.A[j++]);
    }
  }

  for (; i < m; i++)
  {
    c.Append(A[i]);
  }
  for (; j < m; j++)
  {
    c.Append(b.A[j]);
  }

  return c;
}

Array Array::unionVec(Array &b)
{
  Array c = Array(length + b.length);
  int x = 0;
  std::vector<int> search;
  for (int i = 0; i < length; i++)
  {
    search.push_back(A[i]);
    c.Append(A[i]);
  }
  for (int i = 0; i < b.length; i++)
  {
    if (std::find(search.begin(), search.end(), b.A[i]) != search.end())
    {
    }
    else
    {
      c.Append(b.A[i]);
    }
  }

  return c;
}

Array Array::unionFor(Array &b)
{
  Array *c = new Array(length + b.length);
  int i, j, m, n, k;
  i = 0;
  j = 0;
  k = 0;

  while (i < length && j < b.length)
  {
    if (A[i] < b.A[j])
    {
      c->Append(A[i++]);
      k++;
    }
    else if (b.A[j] < A[i])
    {
      c->Append(b.A[j++]);
      k++;
    }
    else
    {
      c->Append(A[i]);
      j++;
    }
  }

  for (; i < m; i++)
  {
    c->A[k++] = A[i];
  }
  for (; j < m; j++)
  {
    c->A[k++] = b.A[i];
  }

  return *c;
}
Array Array::Intersection(Array &b)
{
  Array c = Array(length + b.length);

  int i, j, m, n;
  i = 0;
  j = 0;
  m = length;
  n = length;
  while (i < m && j < n)
  {
    if (A[i] < b.A[j])
    {
      i++;
    }
    else if (b.A[j] < A[i])
    {
      j++;
    }
    else if (A[i] == b.A[j])
    {
      c.Append(A[i]);
      j++;
      i++;
    }
  }

  return c;
}

Array Array::Difference(Array &b)
{
  Array c = Array(length + b.length);
  ;
  int i, j, m, n;
  i = 0;
  j = 0;
  m = length;
  n = length;
  while (i < m && j < n)
  {
    if (A[i] < b.A[j])
    {
      c.Append(A[i++]);
    }
    else if (b.A[j] < A[i])
    {
      j++;
    }
    else
    {
      i++;
      j++;
    }
  }

  for (; i < m; i++)
  {
    c.Append(A[i]);
  }

  return c;
}

// int main()
// {
//   Array arr1;
//   int ch, sz;
//   int x, index;
//   std::cout << "Enter Size of Array";
//   scanf("%d", &sz);
//   arr1 = Array(sz);
//   do
//   {
//     std::cout << "\n\nMenu\n";
//     std::cout << "1. Insert\n";
//     std::cout << "2. Delete\n";
//     std::cout << "3. Search\n";
//     std::cout << "4. Sum\n";
//     std::cout << "5. Display\n";
//     std::cout << "6.Exit\n";
//     std::cout << "enter you choice ";
//     std::cin >> ch;
//     switch (ch)
//     {
//     case 1:
//       std::cout << "Enter an element and index ";
//       std::cin >> x >> index;
//       arr1.Insert(index, x);
//       break;
//     case 2:
//       std::cout << "Enter index ";
//       std::cin >> index;
//       x = arr1.Delete(index);
//       std::cout << "Deleted Element is" << x;
//       break;
//     case 3:
//       std::cout << "Enter element to search";
//       std::cin >>
//           x;
//       index = arr1.LSearch(x);
//       std::cout << "Element index " << index;
//       break;
//     case 4:
//       std::cout << "Sum is " << arr1.sum();
//       break;
//     case 5:
//       arr1.Display();
//     }
//   } while (ch < 6);
//   return 0;
// }

int main()
{
  Array x = Array(10);
  Array *y = new Array(10);

  for (int i = 1; i < 6; i++)
  {
    x.Append(i);
    (*y).Append(i + 6);
  }
  x.Insert(0, 9);
  std::cout << "Average: "
            << x.avg() << std::endl;

  std::cout << "MAX: \t\t" << x.max() << std::endl;
  std::cout << "MIN: \t\t" << x.min() << std::endl;
  std::cout << "GET: \t\t" << x.get(0) << std::endl;
  std::cout << "Bin Search: \t\t" << x.BSearch(4) << std::endl;
  std::cout << "Lin Search: \t\t" << x.LSearch(4) << std::endl;
  x.set(0, -5);
  x.unionFor(*y).Display();

  x.Display();
  return 0;
}