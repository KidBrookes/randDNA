#include <random>
#include <iostream>
#include <string>
using namespace std;

string randDNA(int seed, string bases, int n){
string letters ="";
int min =0;
int max = bases.size()-1;
int index = -1;

mt19937 mt(seed);
uniform_int_distribution<> range(min, max);

for(int i= 0; i< n; i++){
cout<<range(mt);
index =range(mt);
letters +=bases[index];
}
return letters;
}
