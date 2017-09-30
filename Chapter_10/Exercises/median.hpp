#ifndef __MEDIAN_HPP__
#define __MEDIAN_HPP__

#include <algorithm>
#include <cstddef>
#include <iostream>
#include <stdexcept>
#include <vector>

// 10-2
// Rewrite the median function to be callable with a vector or
// built-in array.
template<class T>
T _detail_median(std::vector<T> & v)
{
    typedef typename std::vector<T>::size_type vec_sz;
    vec_sz size = v.size();
    if (size == 0)
        throw std::domain_error("median of an empty vector");
    std::sort(v.begin(), v.end());
    vec_sz mid = size / 2;
    return size % 2 == 0 ? (v[mid] + v[mid - 1]) / 2 : v[mid];
}

template<class T>
T median(std::vector<T> v)
{
    return _detail_median(v);
}

template<class T, class N>
T median(const T * p, N n)
{
    std::vector<T> v(p, p + n);
    return _detail_median(v);
}

// https://stackoverflow.com/questions/437150/can-someone-explain-this-template-code-that-gives-me-the-size-of-an-array
// type of an array reference preserves the size, which we can get
template<class T, std::size_t N>
T median(const T (&a)[N])
{
    return median( a, N );
}

#endif // __MEDIAN_HPP__
