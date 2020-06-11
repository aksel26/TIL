#include <stdio.h>
#include <string.h>
#define MAX 5
// =========== 구조체 ===========
// : 나만의 데이터형을 만들고 싶을때 사용한다

// 구조체 선언 : struct
// 데이터형의 이름 : Student
// 메모리에는 아직 만들어지지 않은 단계
struct Student
{
    char name[20];
    int mat, eng;

    // 구조체 포인터 변수
    // 포인터 변수 : 메모리의 주소를 저장할 수 있는 변수
    //     자료형은 포인터 변수가 가리키는 메모리의 자료형

    // 구조체 포인터 변수 : 주소를 저장할 수 있는 변수
    //     구조체 포인터 변수가 가리키는 메모리의 자료형이 구조체임을 의미

    //     구조체자료형* 구조체포인터 변수명;
};

int main(void)
{
    // struct Student s1;

    // strcpy : 문자열을 서로 복사해 대입해주는 함수 #include <string.h>
    // 대입연산자로는 문자열 대입할 수 없다. -> 이때 strcpy를 쓴다.
    // strcpy(s1.name, "Jhon");
    // s1.mat = 90;
    // s1.eng = 95;
    // printf("%s\n", s1.name);

    //  typedef struct member
    //     {
    //         int id;
    //         char name[20];
    //     } MEMEBER;

    //     int i, count;
    //     MEMEBER* ptr;   // ptr : 구조체 ㅍ인터 변수
    //     MEMEBER marray[MAX]; //person: 구조체 변수

    //     ptr = marray;
    //     for ( i = 0; i < MAX; i++)
    //     {
    //         printf("ID입력 : ");
    //         scanf("%d%*c", &ptr ->id);
    //         if(ptr->id ==-1)
    //         break;

    //         printf("이름 입력 : ");
    //         gets(ptr->name);
    //         ptr++;  //다음 원소로 포인터 이동
    //     }

    //     count = i;
    //     ptr = marray;
    //     for ( i = 0; i < count; i++)
    //     {
    //         printf("id : %d, name :  %s\n",
    //         (ptr+i)->id, (ptr+i)->name);
    //     }

    // ******* 구조체 포인터 변수를 이용 *******

    // typedef struct member
    // {
    //     int id;
    //     char name[20];
    // } MEMEBER;

    // int i, count;
    // MEMEBER* ptr;
    // MEMEBER* paray[MAX];

    // for ( i = 0; i < MAX; i++)
    // {
    //     ptr = (MEMEBER*)malloc(sizeof(MEMEBER));
    //     if(ptr==NULL){
    //         printf("메모리를 더이상 할당할 수 없습니다.\n");
    //         return 1;

    //     }

    //     printf("ID 입력 : ");
    //     scanf("%d%*c", &ptr->id);
    //     if (ptr->id==-1){
    //         break;
    //     }
    //     printf("이르입력 : ");
    //     gets(ptr->name);
    //     paray[i] = ptr;

    //     count = i;
    //     for ( i = 0; i < count; i++)
    //     {
    //         printf("id : %id, name :%s\n",
    //         paray[i]->id, paray[i]->name);
    //     }

    //     free(ptr);
    //     for ( i = 0; i < count; i++)
    //     {
    //         free(paray[i]);
    //     }

    // }

    // == == == == == == 구조체 예제 2 == == == == == ==
    struct point
    {
        int xpos;
        int ypos;
        struct point *ptr;
    };
    struct circle
    {
        double radius;
        struct point *center;
    };

    struct point pos1 = {1, 1};
    struct point pos2 = {2, 2};
    struct point pos3 = {3, 3};

    pos1.ptr = &pos2;
    pos2.ptr = &pos3;
    pos3.ptr = &pos1;

    printf("점의 연결관계 \n");
    printf("[%d, %d]와 [%d, %d] 연결 \n", pos1.xpos, pos1.ypos, pos1.ptr->xpos, pos1.ptr->ypos);
    printf("[%d, %d]와 [%d, %d] 연결 \n", pos2.xpos, pos2.ypos, pos2.ptr->xpos, pos2.ptr->ypos);
    printf("[%d, %d]와 [%d, %d] 연결 \n", pos3.xpos, pos3.ypos, pos3.ptr->xpos, pos3.ptr->ypos);

    // == == == == == == 구조체 예제 3 == == == == == ==

    struct point pos1 = {10, 20};
    struct point pos2 = {100, 200};
    struct point *pptr = &pos1;

    struct point cen = {2, 7};

    pptr->xpos += 4;
    pptr->ypos += 5;

    double rad = 5.5;
    struct circle ring = {rad, &cen};
    printf("[%d, %d] \n", pptr->xpos, pptr->ypos);
    printf("원의 반지름 : %g \n", ring.radius);
    printf("원의 중심 : [%d, %d]\n", (ring.center)->xpos, (ring.center)->ypos);

    return 0;
}