#include <iostream>
#include <algorithm>

using namespace std;

struct Element {
    int value;
    int originalIndex;
};

// Comparator 함수: 값 기준으로 정렬하되, 값이 같으면 원래 인덱스를 기준으로 정렬합니다.
bool compare(const Element &a, const Element &b) {
    return (a.value < b.value) || (a.value == b.value && a.originalIndex < b.originalIndex);
}

int main() {
    int n;
    cin >> n;

    Element elements[n];
    int result[n];

    // 입력받기 및 원소와 원래 위치 저장
    for (int i = 0; i < n; ++i) {
        cin >> elements[i].value;
        elements[i].originalIndex = i;
    }

    // 원소를 값 기준으로 정렬
    sort(elements, elements + n, compare);

    // 각 원소의 새로운 위치를 원래 인덱스에 맞춰 저장
    for (int i = 0; i < n; ++i) {
        result[elements[i].originalIndex] = i+1;
    }

    // 결과 출력
    for (int i = 0; i < n; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}