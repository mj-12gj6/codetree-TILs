#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

const int MAX_N = 100;

int main() {
    int n, k;
    string T;
    cin >> n >> k >> T;

    string words[MAX_N];
    string filteredWords[MAX_N];
    int filteredCount = 0;

    // n개의 단어 입력 받기
    for (int i = 0; i < n; ++i) {
        cin >> words[i];
        // 문자열 T로 시작하는 단어들만 필터링
        if (words[i].find(T) == 0) {
            filteredWords[filteredCount++] = words[i];
        }
    }

    // 필터링된 단어들을 사전순으로 정렬
    sort(filteredWords, filteredWords + filteredCount);

    // k번째 문자열 출력 (1-based index)
    cout << filteredWords[k-1] << endl;

    return 0;
}