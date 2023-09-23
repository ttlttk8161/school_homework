#define _CRT_SECURE_NO_WARNINGS 
#pragma warnings(disable: 4996)
#include <stdio.h>

get_height()
{
    int temp_height = 0;
    scanf("%d", &temp_height);
    return temp_height;
}



print_triangle(int height, int line_length)
{
    int pt_height = height;               //  5, pt_height는 곧 출력하는 삼각형의 1행의 정 가운데 위치임.
    int pt_line_length = line_length;     //  9
    int pt_front_dollor =  pt_height - 1 ;
    int pt_back_dollor = pt_height - 1;
    int n = 2;

    for (; pt_height != 0;--pt_height, ++n, --pt_front_dollor, --pt_back_dollor)// 행간 구분 반복문
    {
        int star = 2*(n - 1)-1;


        // 행간 조건의 변화 주는 반복문
        
            int temp_front_dollor = pt_front_dollor;
            int temp_back_dollor = pt_back_dollor;
            int temp_star = 1;

            for (; temp_front_dollor != 0  ; --temp_front_dollor ) //한 행 처리에 대한 반복문
            {
                printf("$");
            }


            for( ; temp_star <= star; )
            {
                printf("*");
                ++temp_star;
            }


            for ( ; temp_back_dollor != 0; --temp_back_dollor )
            {
                printf("$");
            }

            printf("\n");
        

        if (star == pt_line_length)
        {
            break;
        }

    }

 
}



int main()
{
    printf("높이를 입력하세요\n");
    int height = 0;
    height = get_height();
    int line_length = 2 * (height - 1) + 1;

    print_triangle(height, line_length);

}



/* 높이가 6이면 밑변이 11이겠네

        $는 개행할때 4->3->2->1->0 만큼 줄어드네 ||
        $는 --i 이용해서 9, 8, 7, 6에 위치할수있네
        그외의경우 *을 출력하자.
*/