/*

#include<iostream>
#include<string>
using namespace std;
string sum(string s, string p) {
string r;
reverse(s.begin(), s.end());
reverse(p.begin(), p.end());
if (s.size() < p.size())
s.swap(p);
int len1 = s.size();
int len2 = p.size();
int m = 10;
char z = '0';
int b = 0;
for (int i = 0; i < len1; i++) {
if (i >= len2) {
r += ((s[i] - z + b) % m + z);
if (s[i] - z + b >= m)
b = 1;
else
b = 0;
}
else {
r += ((p[i] - z + s[i] - z + b) % m + z);
if (p[i] - z + s[i] - z + b >= m)
b = 1;
else
b = 0;
}
} if (
b
>
0)
r += (b + z);
reverse(r.begin(), r.end());
return r;
}
int main() {
string s1 = "3333333333333333333333333339933333333333";
string s2 = "4444444444444444444444444444444444444444";
string s3;
s3 = sum(s1, s2);
cout << s3 << endl;
return 0;
}

*/