// type alias
typedef double wages; // wages is a synonym for double
typedef wages base, *p; // base is a synonym for double, p for double*

// alias declaration
using SI = Sales_item;

typedef char *pstring;
const pstring cstr = 0; // cstr is a constant pointer to char
const pstring *ps; // ps is a pointer to a constant pointer to char

const char *cstr = 0; // wrong interpretation of const pstring cstr

// a variable that uses auto as its type specifiers must have an initializer

auto i = 0, *p = &i; // ok: i is int and p is a pointer to int
auto sz = 0, pi = 3.14; // error: inconsistent types for sz and pi

int i = 0, &r = i;
auto a = r; // a is an int (r is an alias for i, which has type int)

const int ci = i, &cr = ci;
auto b = ci; // b is an int (top-level const in ci is dropped)
auto c = cr; // c is an int (cr is an alias for ci whose const is top-level)
auto d = &i; // d is an int*(& of an int object is int*)
auto e = &ci; // e is const int*(& of a const object is low-level const)

// If we want the deduced type to have a top-level const, we must say so explicitly:
const auto f = ci; // deduced type of ci is int; f has type const int

auto &g = ci; // g is a const int& that is bound to ci
auto &h = 42; // error: we can't bind a plain reference to a literal
const auto &j = 42; // ok: we can bind a const reference to a literal

auto k = ci, &l = i; // k is int; l is int&
auto &m = ci, *p = &ci; // m is a const int&;p is a pointer to const int
// error: type deduced from i is int; type deduced from &ci is const int
auto &n = i, *p2 = &ci;

decltype(f()) sum = x; // sum has whatever type f returns
const int ci = 0, &cj = ci;
decltype(ci) x = 0; // x has type const int
decltype(cj) y = x; // y has type const int& and is bound to x
decltype(cj) z; // error: z is a reference and must be initialized

// decltype of an expression can be a reference type
int i = 42, *p = &i, &r = i;
decltype(r + 0) b; // ok: addition yields an int; b is an (uninitialized) int
decltype(*p) c; // error: c is int& and must be initialized
