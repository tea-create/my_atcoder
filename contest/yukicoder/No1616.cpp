#include <algorithm>
#include <iostream>
#include <vector>
#include <cstdio>

///////////////////////////////
#define DEBUG
///////////////////////////////

#pragma region Macros // macros
#define PI 3.14159265359
#define MOD 1000000007
#define ll long long
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define lep(i, n) for (long i = 0; i < (long)(n); i++)
#define llep(i, n) for (long long i = 0; i < (long long)(n); i++)
#define rep2(i, m, n) for (int i = m-1; i < (int)(n); i++)
#define lep2(i, m, n) for (long i = m-1; i < (long)(n); i++)
#define llep2(i, m, n) for (long long i = m-1; i < (long long)(n); i++)
#define repinf(i) for(int i = 0;;i++)
#define lepinf(i) for(long i = 0;;i++)
#define llepinf(i) for(long long i = 0;;i++)
#define _GLIBCXX_DEBUG

#define SWAP(type, a, b) { const type tmp = a; a = b; b = tmp; }
#define arr_cpy(from, to) memcpy(to, from, sizeof(from))
#define SIZE_OF_ARRAY(array) (sizeof(array)/sizeof(array[0]))
#define elif
#ifdef DEBUG
#define PRINTI(x) printf(#x " = %d\n", (x))
#define PRINTLL(x) printf(#x " = %lld\n", (x))
#define RAW_PRINT(x) printf(#x "\n")
#else 
#define PRINTI(x)
#define PRINTLL(x)
#endif
#pragma endregion

#pragma region readers // readers

long long llead(){
	long long x = 0; char c;
	while(((c=getchar())>'9' || c<'0')&&c!='-');
	const long long f=(c=='-')&&(c=getchar());
	while(x=x*10-48+c,(c=getchar())>='0'&&c<='9');
	return f?-x:x;
}

int read(){
	int x = 0; char c;
	while(((c=getchar())>'9' || c<'0')&&c!='-');
	const int f=(c=='-')&&(c=getchar());
	while(x=x*10-48+c,(c=getchar())>='0'&&c<='9');
	return f?-x:x;
}

long lead(){
	long x = 0; char c;
	while(((c=getchar())>'9' || c<'0')&&c!='-');
	const long f=(c=='-')&&(c=getchar());
	while(x=x*10-48+c,(c=getchar())>='0'&&c<='9');
	return f?-x:x;
}

short int sead(){
	short int x = 0; char c;
	while(((c=getchar())>'9' || c<'0')&&c!='-');
	const short int f=(c=='-')&&(c=getchar());
	while(x=x*10-48+c,(c=getchar())>='0'&&c<='9');
	return f?-x:x;
}

#pragma endregion

using namespace std;

vector<int> divisor(int n) {
    vector<int> ret;
    for (int i = 1; i * i <= n; i++) {
        if ((int)n % (int)i == 0) {
            ret.push_back((int)i);
            if ((int)i * (int)i != n) ret.push_back(n / (int)i);
        }
    }
    sort(ret.begin(), ret.end()); // 昇順に並べる
    return ret;
}

int main(void){
	int n = read();
	vector<int> list = divisor(n);
	int cnt = list.size();
	int a = 0;
	double b = 0;
	rep(i,cnt){
		a += list[i];
		b += 1.0/(double)list[i] ;
	}
	cout <<  (int)((double)a/b);
	return 0;//AC https://yukicoder.me/submissions/681849
}