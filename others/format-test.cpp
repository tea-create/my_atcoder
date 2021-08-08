#include <iostream>
#include <cmath>
#include <cstdio>

///////////////////////////////
#define DEBUG
///////////////////////////////

#pragma region Macros // macros
#define PI 3.14159265359
#define rep(i, r, l) for (int i = r; i < (int)(l); i++)
#define repinf(i) for (int i = 0;; i++)
#define lepinf(i) for (long i = 0;; i++)
#define llepinf(i) for (long long i = 0;; i++)
#define ll long long

#define _GLIBCXX_DEBUG
#define unknown -pragmas

#define SWAP(type, a, b)    \
	{                       \
		const type tmp = a; \
		a = b;              \
		b = tmp;            \
	}
#define arr_cpy(from, to) memcpy(to, from, sizeof(from))
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

long long llead() {
	long long x = 0;
	char c;
	while (((c = getchar()) > '9' || c < '0') && c != '-')
		;
	const long long f = (c == '-') && (c = getchar());
	while (x = x * 10 - 48 + c, (c = getchar()) >= '0' && c <= '9')
		;
	return f ? -x : x;
}

int read() {
	int x = 0;
	char c;
	while (((c = getchar()) > '9' || c < '0') && c != '-')
		;
	const int f = (c == '-') && (c = getchar());
	while (x = x * 10 - 48 + c, (c = getchar()) >= '0' && c <= '9')
		;
	return f ? -x : x;
}

int lead() {
	long x = 0;
	char c;
	while (((c = getchar()) > '9' || c < '0') && c != '-')
		;
	const long f = (c == '-') && (c = getchar());
	while (x = x * 10 - 48 + c, (c = getchar()) >= '0' && c <= '9')
		;
	return f ? -x : x;
}

int sead() {
	short int x = 0;
	char c;
	while (((c = getchar()) > '9' || c < '0') && c != '-')
		;
	const short int f = (c == '-') && (c = getchar());
	while (x = x * 10 - 48 + c, (c = getchar()) >= '0' && c <= '9')
		;
	return f ? -x : x;
}

#pragma endregion

long long pow(int a, int b) {
	long long ret = 1;
	if (a == 0)
		return 0;
loop:
	{
		if (b == 0)
			return ret;
		ret *= (long long)a;
		b -= 1;
	}
	goto loop;
}

long long keta(long long tar) {
	long long a = tar, b = 1;
loop:
	{
		if (a == 0) {
			return 1;
		}
		if (tar / 10 != 0) {
			a = a / 10;
			b++;
			goto loop;
		}
		return b;
	}
}

long long kaijo(long long tar) {
	long long sum = 0;
	long long i = tar;
loop:
	{
		if (i == 0)
			return sum;
		sum += i;
		i -= 1;
		goto loop;
	}
}

int main(void) {
	ll n = read(), p = read(), q = read();
	ll a[n] = { 0 };
	rep(i, 0, n) {
		a[i] = read() % p;
	}
	int cnt = 0;
	ll t1, t2, t3, t4, t5;
	rep(i, 0, n - 4) {
		t1 = a[i] % p;
		rep(j, 1 + i, n - 3) {
			t2 = (a[j] * t1) % p;
			rep(k, 1 + j, n - 2) {
				t3 = (a[k] * t2) % p;
				rep(l, 1 + k, n - 1) {
					t4 = (a[l] * t3) % p;
					rep(m, 1 + l, n) {
						t5 = (a[m] * t4) % p;
						if (t5 == q)
							cnt++;
					}
				}
			}
		}
	}
	printf("%d\n", cnt);
	return 0;
}