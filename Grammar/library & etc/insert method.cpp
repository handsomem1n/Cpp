/*C++의 insert 함수는 여러 가지 컨테이너에서 사용할 수 있는 멤버 함수로,
>>지정된 위치에 요소를 삽입<<
합니다.

아래는 insert 함수의 형식과 사용 방법입니다.

iterator insert (iterator position, const value_type& val);
iterator insert (iterator position, size_type n, const value_type& val);
template <class InputIterator>
void insert (iterator position, InputIterator first, InputIterator last);
iterator insert (iterator position, value_type&& val);
iterator insert (iterator position, initializer_list<value_type> il);

    position: 요소를 삽입할 위치를 가리키는 반복자
    val: 삽입할 요소의 값
    n: 삽입할 요소의 개수
    first, last: 삽입할 요소의 범위를 지정하는 반복자
    il: 삽입할 요소를 초기화 리스트로 지정하는 방법

    insert 함수는
    >>position 위치에 지정된 값을 삽입<<
    하고, 해당 값을 가리키는 반복자를 반환합니다. 만약 여러 개의 값을 삽입한다면, 해당 함수는 삽입된 첫 번째 값을 가리키는 반복자를 반환합니다.

    코드 예시입니다.
    */
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v{1, 2, 3, 4};

  // 삽입할 위치에 있는 반복자를 지정하여 요소 삽입
  auto it = v.insert(v.begin() + 2, 5); // 첫 번째 예제에서는 v.begin() + 2 위치에 5를 삽입하고, 그 결과를 it 변수에 저장하여 출력합니다.

  cout << "v: ";
  for (auto i : v) cout << i << " ";
  cout << "\nInserted value: " << *it << "\n\n"; // C++의 std::vector에서 insert 함수를 사용하여 벡터의 특정 위치에 새로운 값을 삽입할 수 있습니다. 이때 "inserted value"라는 용어는 새로 삽입된 값을 가리킵니다.

  // 삽입할 요소의 개수를 지정하여 요소 삽입
  it = v.insert(v.begin() + 1, 3, 6); // 두 번째 예제에서는 v.begin() + 1 위치에 6을 3개 삽입하고, 그 결과를 it 변수에 저장하여 출력합니다. 

  cout << "v: ";
  for (auto i : v) cout << i << " ";
  cout << "\nInserted value: " << *it << "\n\n";

  // 다른 벡터의 요소를 벡터에 삽입
  vector<int> v2{7, 8, 9}; // 세 번째 예제에서는 다른 vector 객체 v2에 저장된 요소를 v 벡터의 끝에 삽입하고
  v.insert(v.end(), v2.begin(), v2.end());

  cout << "v: ";
  for (auto i : v) cout << i << " ";
  cout << "\n\n";

  // 초기화 리스트를 사용하여 요소 삽입
  v.insert(v.begin(), {10, 11, 12}); // 마지막 예제에서는 초기화 리스트를 사용하여 요소를 벡터의 맨 앞에 삽입합니다. 

  cout << "v: ";
  for (auto i : v) cout << i << " ";
  cout << "\n\n";

  return 0;
}

/* 위 코드에서 vector 객체 v에 대해 insert 함수를 사용하고 있습니다.*/