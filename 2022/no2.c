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
    int pt_height = height;               //  5, pt_height�� �� ����ϴ� �ﰢ���� 1���� �� ��� ��ġ��.
    int pt_line_length = line_length;     //  9
    int pt_front_dollor =  pt_height - 1 ;
    int pt_back_dollor = pt_height - 1;
    int n = 2;

    for (; pt_height != 0;--pt_height, ++n, --pt_front_dollor, --pt_back_dollor)// �ణ ���� �ݺ���
    {
        int star = 2*(n - 1)-1;


        // �ణ ������ ��ȭ �ִ� �ݺ���
        
            int temp_front_dollor = pt_front_dollor;
            int temp_back_dollor = pt_back_dollor;
            int temp_star = 1;

            for (; temp_front_dollor != 0  ; --temp_front_dollor ) //�� �� ó���� ���� �ݺ���
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
    printf("���̸� �Է��ϼ���\n");
    int height = 0;
    height = get_height();
    int line_length = 2 * (height - 1) + 1;

    print_triangle(height, line_length);

}



/* ���̰� 6�̸� �غ��� 11�̰ڳ�

        $�� �����Ҷ� 4->3->2->1->0 ��ŭ �پ��� ||
        $�� --i �̿��ؼ� 9, 8, 7, 6�� ��ġ�Ҽ��ֳ�
        �׿��ǰ�� *�� �������.
*/