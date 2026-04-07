/*
1. 배열로 구현된 리스트 : 배열을 이용하여 리스트를 구현하면 순차적인 메모리 공간이 할당되므로, 이것을 리스트의 순차적 표현이라고 한다.

// ArrayListType의 구현

#define MAX_LIST_SIZE 100

#include <stdio.h>
#include <stdlib.h>

typedef int element;

typedef struct {
    element array[MAX_LIST_SIZE];     // 배열 정의
    int size;                         // 현재 리스트에 저장된 항목들의 개수
} ArrayListType;


// 오류 처리 함수
// 오류 메시지를 stderr로 출력하고 프로그램 종료
void error(char* message)
{
    fprintf(stderr, "%s\n", message);         // stderr은 오류 메시지 따로 출력
    exit(1);
}

// 리스트 초기화 함수
// 리스트를 비어있는 상태로 만든다

void init(ArrayListType* L)
{
    L->size = 0;
}

// 리스트가 비어있는지 확인
// 리스트가 비어있으면 1을 반환, 그렇지 않으면 0을 반환

int is_empty(ArrayListType* L)
{
    return L->size == 0;
}

// 리스트가 가득 차 있는지 확인 
// 리스트가 가득 차 있으면 1을 반환, 그렇지 않으면 1을 반환

int is_full(ArrayListType* L)
{
    return L->size == MAX_LIST_SIZE;
}

// 특정 위치의 요소 반환 함수
// pos 위치의 데이터를 반환

element get_entry(ArrayListType* L, int pos)   // pos 위치의 요소를 반환한다
{
    if (pos < 0 || pos >= L->size) {       // 음수 인덱스 안되고, 범위 초과 안되고 !
        error("위치 오류\n");
    }
    return L->array[pos];               // 리스트 내부 배열에서 pos 위치에 있는 값을 꺼내서 반환  // 여기에서 pos는 인덱스임!
}

// 리스트 출력
// 리스트의 모든 요소를 순서대로 출력

void print_list(ArrayListType* L)
{
    int i;
    for (i = 0; i < L->size; i++) {
        printf("%d->", L->array[i]);
    }
    printf("\n");
}

// 리스트 맨 뒤에 요소 추가

void insert_last(ArrayListType* L, element item)
{
    if (L->size >= MAX_LIST_SIZE) {
        error("리스트 오버플로우\n");
    }
    L->array[L->size++] = item;
}

// 특정 위치에 요소 삽입

void insert(ArrayListType* L, int pos, element item)
{
    if (!is_full(L) && (pos >= 0) && (pos <= L->size)) {
        for (int i = (L->size - 1); i >= pos; i--) {
            // 뒤에서부터 한 칸씩 이동 (공간 확보)
            L->array[i+1] = L->array[i];
        }
        // 해당 위치에 값 삽입
        L->array[pos] = item;
        L->size++;
    }
}

// i번째와 i+1번쨰의 값이 충돌되면 리스트의 사이즈를 하나 뺸다
// 특정 위치의 요소 삭제

element delete(ArrayListType* L, int pos)
{
    element item;

    if (pos < 0 || pos >= L->size) {
        printf("위치 오류\n");
    }
    // 삭제할 값 저장
    item = L->array[pos];

    // 뒤에 있는 요소들을 앞으로 한 칸씩 이동
    for (int i = pos; i < (L->size - 1); i++) {
        L->array[i] = L->array[i+1];
    }
    L->size--;
    return item;
}

int main(void)
{
    // ArrayListType을 정적으로 생성하고 ArrayListType을 가리키는 포인터를 함수의 매개변수로 전달한다
    ArrayListType list;

    init(&list);
    insert(&list, 0, 10);   print_list(&list);   // 0번쨰 위치에 10 추가
    insert(&list, 0, 20);   print_list(&list);   //            20 추가
    insert(&list, 0, 30);   print_list(&list);   //            30 추가
    insert_last(&list, 40); print_list(&list);   // 맨 끝에 40 추가
    delete(&list, 0);       print_list(&list);   // 0번쨰 항목 삭제
    return 0;
}



2. 연결리스트: 물리적으로 흩어져있는 자료들을 서로 연결하여 하나로 묶는 방법
- 연결리스트에서는 중간에 있는 데이터를 삽입하고 싶으면 앞 뒤에 있는 데이터들을 이동할 필요가 없이 줄만 변경해주면 된다.
삭제 시에도 마찬가지다.
- 다른 노드로 가기 위해서는 현재 노드가 가지고 있는 포인터를 이용하면 된다.
- 노드는 '데이터 필드'와 '링크 필드'로 구성되어있다.
- '데이터 필드'란 리스트의 원소, 즉 데이터 값을 저장하는 곳이다. '링크 필드'란 다른 노드의 주소값을 저장하는 장소이다.(포인터)
- 연결리스트마다 첫번째 노드를 가리키고 있는 변수가 필요한데, 이것을 '헤드 포인터'라고 한다.
- 마지막 노드의 링크 필드는 항상 NULL로 설정된다.
- 연결리스트의 노드들은 필요할 때마다 malloc()을 이용하여 동적으로 생성된다.

- 연결리스트의 종류는 3가지인데, 단순 연결리스트, 원형 연결리스트, 이중 연결리스트가 있다.

<연결된 표현의 장점>
- 삽입, 삭제가 보다 용이하다.
- 연속된 메모리 공간이 필요 없다.
- 크기 제한이 없다.

2-1. 단순 연결리스트
: 하나의 링크 필드를 이용하여 연결
- 마지막 노드의 링크값은 NULL이다.

*/

#include <stdio.h>
#include <stdlib.h>

// 노드를 만들기 위한 설계도(아직 노드는 설계되지 않았음)

typedef int element;

typedef struct {
    element data;
    struct ListNode* link;
} ListNode;

// 공백 리스트의 생성
// 어떤 리스트가 공백인지를 검사하려면 헤드 포인터가 NULL인지를 검사하면 된다.

ListNode* head = NULL;

// 노드의 생성

head = (ListNode*)malloc(sizeof(ListNode));

head->data = 10;
head->link = NULL;

// 노드의 연결
// 두번째 노드를 동적으로 생성하고 노드에 20을 저장
ListNode* p;
p = (ListNode *)malloc(sizeof(ListNode));
p->data = 20;
p->link = NULL;

head->link = p;    ????

// 삽입 연산 insert_first()

ListNode* insert_first(ListNode* head, element value);   // 라스트 처음 부분에 항목을 삽입하는 함수

insert_first(head, value):
1. p<-malloc()        // 동적 메모리 랑당을 통하여 새로운 노드 p를 생성한다.
2. p->data <- value   // p->data에 value를 저장한다.
3. p->link <- head    // p->link를 현재의 head 값으로 변경한다.
4. head <- p          // head를 p값으로 변경한다.
5. return head        // 변경된 해트 포인터 반환

ListNode* insert_first(ListNode* head, int value)
{
    ListNode* p = (ListNode *)malloc(sizeof(ListNode));
    p->data = value;
    p->link = head;
    head = p;
    return head;
}

// 노드 pre 뒤에 새로운 노드 삽입
// pre: 선행 노드, value: 추가할 값
ListNode* insert(ListNode* p, ListNode* pre, element value)   // 리스트 중간 부분에 항목을 삽입하는 함수
{
    ListNode* p = (ListNode *)malloc(sizeof(ListNode));
    p->data = value;              // p의 데이터필드에 20을 저장한다.    ????????
    p->link = pre->link;          // p의 링크 필드가 노드 30을 가리키게 변경한다.
    pre->link = p;                // 10의 링크 필드가 20을 가리키도록 한다.
    return head;
}   // 아빠한테 질문...