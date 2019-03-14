#include <random>
#include <iostream>
#include <string>
using namespace std;

string randDNA(int seed, string bases, int n){
string letter ="";
int min =0;
int max =bases.size() -1;


mt19937 dna1(seed);
uniform_int_distribution<int> range(min,max);

if(bases == ""){
return "";
}

for(int i=0; i<n;i++){
 
letter += bases[range(dna1)];

}
return letter;
}
