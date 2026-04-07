1. 선형 큐: 배열을 선형으로 사용하여 큐를 구현
- 삽입을 계속 하기 위해서는 요소들을 이동시켜야함
- 그래서 enqueue는 rear의 인덱스가 증가되고, dequeue는 front의 인덱스가 증가된다

#include <stdio.h>
#include <stdlib.h>

#define MAX_QUEUE_SIZE 5

typedef int element;
typedef struct {
    int front;
    int rear;
    element data[MAX_QUEUE_SIZE];
} QueueType;

// 오류함수

void error(char* message)
{
    fprintf(stderr, "%s\n", message);
    exit(1);
}

// 초기화 함수

void init_queue(QueueType* q)
{
    q->rear = -1;
    q->front = -1;
}


// 큐 출력

void queue_print(QueueType* q)
{
    for (int i = 0; i < MAX_QUEUE_SIZE; i++) {
        if (i <= q->front || i > q->rear)
            printf(" | ");
        else
            printf("%d | ", q->data[i]);
    }
    printf("\n");
}


// 큐가 가득 차 있는지 확인

int is_full(QueueType* q)
{
    if (q->rear == MAX_QUEUE_SIZE - 1)
        return 1;
    else
        return 0;
}


// 큐가 비어있는지 확인

int is_empty(QueueType* q)
{
    if (q->front == q->rear)
        return 1;
    else
        return 0;
}

// 큐 삽입
// 포화상태이면 안됨

void enqueue(QueueType* q, int item)
{
    if (is_full(q)) {
        error("큐가 포화상태입니다.\n");
        return;
    }
    q->data[++(q->rear)] = item;
}

// 큐 삭제
// 비어있으면 안됨

int dequeue(QueueType* q)
{
    if (is_empty(q)) {
        error("큐가 공백상태입니다.\n");
        return -1;
    }
    int item = q->data[++(q->front)];
    return item;
}

int main(void)
{
    int item = 0;
    QueueType q;

    init_queue(&q);

    enqueue(&q, 10); queue_print(&q);
    enqueue(&q, 20); queue_print(&q);
    enqueue(&q, 30); queue_print(&q);

    item = dequeue(&q); queue_print(&q);
    item = dequeue(&q); queue_print(&q);
    item = dequeue(&q); queue_print(&q);
    return 0;
}


선형 큐의 front와 rear값이 계속 증가만 하기 때문에 언젠가는 배열의 끝에 도달하게 되고 배열의 앞부분이 비어있더라도 사용하지를 못한다는 점이다. 
따라서 주기적으로 모든 요소들을 왼쪽으로 이동시켜야한다. 이렇게 매번 이동시키면 해결은 되지만, 매번 많은 데이터들을 이동시키려면 상당한 시간이 걸리고 프로그램 코딩도 복잡해진다.


2. 원형 큐
: 선형큐의 문제점을 해결할 수 있다. 즉, front와 rear의 값이 MAX_QUEUE_SIZE-1에 도달하면 다음에 증가되는 값을 0이 되도록 하는 것이다.
- front는 항상 큐의 첫번쨰 요소의 하나 앞을, rear는 마지막 요소를 가리킨다. 삽입 시에는 rear의 값이 하나씩 증가된다. 삭제 시에는 front의 값이 하나씩 증가된다.
- 공백 상태에는 front와 rear의 값이 같다. (front == rear)
- 포화 상태에는 front % M == (rear+1) % M -> front가 rear의 하나 앞에 있을 때 포화상태가 된다.
- 오류 상태일 떄에도 front와 rear의 값이 같다.
- 그래서 공백 상태와 포화 상태를 구분하기 위해 하나의 공간은 항상 비워둔다.


#include <stdio.h>
#include <stdlib.h>

#define MAX_QUEUE_SIZE 5

typedef int element;

typedef struct {
    element data[MAX_QUEUE_SIZE];
    int front;
    int rear;
} QueueType;

// 오류 함수

void error(const char* message)
{
    fprintf(stderr, "%s\n", message);
    exit(1);
}

// 공백 상태 검출 함수

void init_queue(QueueType* q)
{
    q->front = q->rear = 0;
}

// 공백 상태 검출 함수

int is_empty(QueueType* q)
{
    return (q->front == q-> rear);
}


// 포화 상태 검출 함수

int is_full(QueueType* q)
{
    return ((q->rear + 1) % MAX_QUEUE_SIZE == q-> front);
}

// 원형 큐 출력 함수

void queue_print(QueueType* q)
{
    printf("QUEUE(front = %d rear = %d)= ", q->front, q->rear);

    if(!is_empty(q)) {
        int i = q->front;       // i를 front 위치로 설정   // 하지만 실제 첫 데이터는 front 다음 위치에 있음
        do {
            i = (i + 1) % (MAX_QUEUE_SIZE);     //  원형 구조 구현
            printf("%d | ", q->data[i]); 
            if (i == q->rear)                  // rear 위치까지 출력하면 반복 종료
                break;
        } while (i != q->front);               // 무한루프 방지하는 안전장치 느낌
    }
    printf("\n");
}

// 삽입 함수

void enqueue(QueueType* q, element item)
{
    if (is_full(q)) {
        error("큐가 포화상태입니다.\n");
        return;
    }
    q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
    q->data[q->rear] = item;
}

// 삭제 함수

element dequeue(QueueType* q)
{
    if (is_empty(q)) {
        error("큐가 공백상태입니다.\n");
        exit(1);
    }
    q->front = (q->front + 1) % MAX_QUEUE_SIZE;
    q->data[q->front];
}

element peek(QueueType* q)
{
    if (is_empty(q)) {
        error("큐가 공백상태입니다.\n");
    }
    return q->data[(q->front + 1) % MAX_QUEUE_SIZE];
}

// 메인 함수 구현

  int main(void)
  {
    QueueType queue;
    int element;

    init_queue(&queue);         // 초기화되어있는지 확인
    printf("--데이터 추가 단계--\n");
    while (!is_full(&queue))    // 꽉 차있는 상태가 아닐때
    {
        printf("정수를 입력하세요: ");
        scanf("%d", &element);
        enqueue(&queue, element);
        queue_print(&queue);
    }
    printf("큐는 포화상태입니다.\n");

    printf("--데이터 삭제 단계--\n");
    while (!is_empty(&queue)) 
    {
        element = dequeue(&queue);
        printf("꺼내진 정수: %d\n", element);
        queue_print(&queue);
    }
    printf("큐는 공백상태입니다.\n");
    return 0;
  }


3. 덱
: 큐의 front와 rear에서 모두 삽입과 삭제가 가능한 큐
- 덱은 원형 큐를 확장한 것이다.
- delete_rear()과 add_front() 에서는 원형 큐와 다르게 반대 방향의 회전이 필요하다.


#include <stdio.h>
#include <stdlib.h>

#define MAX_QUEUE_SIZE 5

typedef int element;

typedef struct {
    element data[MAX_QUEUE_SIZE];
    int front;
    int rear;
} DequeType;

// 오류 함수
void error(char* message)
{
    fprintf(stderr, "%s\n", message);
    exit(1);
}

// 큐 초기화 함수

void init_deque(DequeType* q)
{
    q->front = q->rear = 0;
}

// 공백 상태 검출 함수
int is_empty(DequeType* q)
{
    return (q->front == q->rear);
}

// 포화 상태 검출 함수
int is_full(DequeType* q)
{
    return ((q->rear + 1) %  MAX_QUEUE_SIZE == q->front);
}

// 원형 큐 출력 함수

void deque_print(DequeType* q)
{
    printf("DEQUE(front = %d rear = %d) = ", q->front, q->rear);
    if (!is_empty(q)) {
        int i = q->front;
        do {
            i = (i + 1) % (MAX_QUEUE_SIZE);
            printf("%d | ", q->data[i]);
            if (i == q->rear)
                break;
        } while (i != q->front);
    }
    printf("\n");
}


// 삽입 함수

void add_rear(DequeType* q, element item)
{
    if (is_full(q)) 
        error("큐가 포화상태입니다.\n");
    q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
    q->data[q->rear] = item;
}

// 삭제 함수

element delete_front(DequeType* q)
{
    if (is_empty(q))
        error("큐가 공백상태입니다.\n");
    q->front = (q->front + 1) % MAX_QUEUE_SIZE;
    q->data[q->front];
}

// 삭제 함수

element get_front(DequeType* q)                    // 덱의 앞에서 삭제하지 않고 앞에 있는 요소를 반환한다
{
    if (is_empty(q))
        error("큐가 공백상태입니다.\n");
    return q->data[(q->front + 1) % MAX_QUEUE_SIZE];
}

// 삽입 함수

// add_front() 와 delete_rear()는 원형 큐에서와는 다르게 반대 방향의 회전이 필요하다

void add_front(DequeType* q, element val)
{
    if (is_full(q))
        error("큐가 포화상태입니다.\n");
    q->data[q->front] = val;
    q->front = (q->front - 1 + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE;

}

element delete_rear(DequeType* q)
{
    int prev = q->rear;         // 가장 먼저 rear값이 들어갔다고 prevoius값으로 지정
    if (is_empty(q))
        error("큐가 포화상태입니다.\n");
    q->rear = (q->rear - 1 + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE;
    return q->data[prev];
}

element get_rear(DequeType* q)            // 덱의 뒤에서 삭제하지 않고 뒤에 있는 요소를 반환한다
{
    if (is_empty(q))
        error("큐가 공백상태입니다.\n");
    return q->data[q->rear];
}

int main(void)
{
    DequeType queue;

    init_deque(&queue);
    for (int i = 0; i < 3; i++) {
        add_front(&queue, i);
        deque_print(&queue);
    }
    for (int i = 0; i < 3; i++) {
        delete_rear(&queue);
        deque_print(&queue);
    }
    return 0;
}



