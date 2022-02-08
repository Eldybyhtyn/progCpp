#include <iostream>
 
void print(const int*, const int*);
void twice(int*, int*);
 
int main()
{
    int nums1[] = { 1, 2, 3, 4, 5 };
    int *begin = std::begin(nums1);
    int *end = std::end(nums1);
    print(begin, end);
    std::cout << std::endl;
 
    int nums2[] = { 1, 2, 3, 4, 5 }; 
    begin = std::begin(nums2);
    end = std::end(nums2);
    twice(begin, end);
    print(begin, end);
    std::cout << std::endl;
    return 0;
}
 
void print(const int *begin, const int *end)
{
    for (const int *ptr  = begin; ptr != end; ptr++)
    {
        std::cout << *ptr << "\t";
    }
}
void twice(int *begin, int *end)
{
    for (int *ptr = begin; ptr != end; ptr++)
    {
        *ptr = *ptr * 2;
    }
}