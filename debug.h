#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
template<typename T>
void __print(const T &x){ cerr<<x;}
template <typename T,typename U>
void __print(const pair<T, U> &p) {
    cerr<<'[';
    __print(p.first);
    cerr<<',';
    __print(p.second);
    cerr<<']';
}
template <typename T>
void __print(const vector<T> &v) {
    cerr<<"[ ";
    for (auto &i:v) { __print(i);cerr<<" "; }
    cerr<< "]";
}
template <typename T>
void __print(const set<T> &s) {
    cerr<<"[ ";
    for(auto &i:s){ __print(i);cerr<<" ";}
    cerr<<"]";
}
template <typename T>
void __print(const multiset<T> &s) {
    cerr<<"[ ";
    for(auto &i:s){ __print(i);cerr<<" ";}
    cerr<<"]";
}
template <typename T>
void __print(const unordered_set<T> &s) {
    cerr<<"[ ";
    for(auto &i:s){ __print(i);cerr<<" ";}
    cerr<<"]";
}
 template <typename T, typename U>
void __print(const unordered_map<T,U>&m) {
    cerr<<"{ ";
    for (auto &i:m) {__print(i.first);cerr<<":";__print(i.second); cerr << " "; }
    cerr<<"}";
}
template <typename T, typename U>
void __print(const map<T,U>&m) {
    cerr<<"{ ";
    for (auto &i:m) {__print(i.first);cerr<<":";__print(i.second); cerr << " "; }
    cerr<<"}";
}
// Variadic debug
void _print(){cerr<<"\n";}
template <typename T, typename... V>
void _print(T t, V... v) {
    __print(t);
    if (sizeof...(v)) cerr << ", ";
    _print(v...);
}
#define debug(x...) cerr<< #x << " = ", _print(x)
#else
#define debug(x...)
#endif