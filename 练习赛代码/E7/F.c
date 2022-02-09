#include <stdio.h>
#include <string.h>

#define MAXN 305

char s1[MAXN], s2[MAXN];
int a1[MAXN], a2[MAXN];
int sum[MAXN];

void swap(int *a, int *b) {
    int t = *a; *a = *b; *b = t;
}

void num_rev_to_str(int *to, char *src, int l) {
    int i;
    for (i = 0; i < l; i++) {
        *(to + i) = *(src + l - i - 1) - '0';
    }
}

void big_add(int s[], int *len, int a[], int lena, int b[], int lenb) {
    int i;
    *len = lena > lenb ? lena : lenb;
    memset(s, 0, sizeof(s));
    for (i = 0; i < *len; i++) {
        *s += *a + *b;
        if (*s >= 10) {
            *s -= 10;
            *(s + 1) += 1;
            if (i == *len - 1) (*len)++;
        }
        s++, a++, b++;
    }
}

void rev_arr(int *l, int *r) {
    while (l < r) {
        swap(l, r);
        l++, r--;
    }
}

void print_arr(int s[], int l) {
    int *p;
    for (p = s; p < s + l; p++) {
        printf("%d", *p);
    }
    printf("\n");
}

int main()
{
    int len1, len2, len;
    int *pl1 = &len1, *pl2 = &len2, *pl = &len;

    while (scanf("%s %s", s1, s2) != EOF) {
        *pl1 = strlen(s1);
        *pl2 = strlen(s2);
        memset(a1, 0, sizeof(a1));
        memset(a2, 0, sizeof(a2));
        num_rev_to_str(a1, s1, *pl1);
        num_rev_to_str(a2, s2, *pl2);
        big_add(sum, pl, a1, len1, a2, len2);
        rev_arr(sum, sum + len - 1);
        print_arr(sum, len);
        memset(sum, 0, sizeof(sum));
        memset(s1, 0, sizeof(s1));
        memset(s2, 0, sizeof(s2));
    }

    return 0;
}
