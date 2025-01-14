#include <stdio.h>
#include <stdlib.h>

int compare_desc(const void* a, const void* b) {
    return *(int*)b - *(int*)a; 
}

int compare_asc(const void* a, const void* b) {
    return *(int*)a - *(int*)b; 
}

int main() {
    int n;
    scanf("%d", &n);
    
    int a[n], b[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }
    
    qsort(a, n, sizeof(int), compare_desc);
    qsort(b, n, sizeof(int), compare_asc); 
    
    long long s = 0;
    for (int i = 0; i < n; i++) {
        s += (long long)a[i] * b[i];  
    }
    
    printf("%lld", s);
    
    return 0;
}
