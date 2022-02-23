#include<bits/stdc++.h>
#include <time.h>

using namespace std;

double dot(double* x, double* y, int n) {
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += x[i] * y[i];
    }
    return sum;
}

int main()
{
    double start_time = clock();
    double x[8] = {16777216.0f, 1.f ,1.f ,1.f ,1e5f,1.f,1.f,1.f};
    double y[8] = {1.f, 1.f, 1.f, 1.f, 1.f, 1.f, 1.f, 1.f};
    double ans = dot(x,y,8);
    printf("%lf\n",ans);
    double end_time = clock();
	printf("Time = %lf\n", (end_time - start_time) / CLOCKS_PER_SEC);
    return 0;
}

