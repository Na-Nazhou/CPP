#include <iostream>

    int i = 0;
    int *const p1 = &i; // we can't change the value of p1; const is top-level
    const int ci = 42; // we cannot change ci; const is top-level
    const int *p2 = &ci; // we can change p2; const is low-level
    const int *const p3 = p2; // right-most const is top-level, left-most is not
    const int &r = ci; // const in reference types is always low-level

    i = ci; // ok: copying the value of ci; top-level const in ci is ignored
    p2 = p3; // ok: pointed-to type matches; top-level const in p3 is ignored

    // when we copy an object, top-level consts are ignored
    // on the other hand, low-level const is never ignored
    // In general, we can convert a nonconst to const but not the other way round
    int *p = p3; // error: p3 has a low-level const but p doesn't
    p2 = p3; // ok: p2 has the same low-level const qualification as p3
    p2 = &i; // ok: we can convert int* to const int*
    int &r = ci; // error: can't bind an ordinary int& to a const int object
    const int &r2 = i; // ok: can bind const int& to plain int

    constexpr int mf = 20; // 20 is a constant expression
    constexpr int limit = mf + 1; // mf + 1 is a constant expression
    constexpr int sz = size(); // ok only if size is a constexpr function

    const int *p = nullptr; // p is a pointer to a const int
    constexpr int *q = nullptr; // q is a const pointer to int
    // top level constant
