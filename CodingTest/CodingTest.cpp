using namespace std;

#include <iostream>

int main()
{
    //�� �ʱ�ȭ
    int iCount(0);
    int iAdd(0);
    int iIndex(0);

    cin >> iCount;

    //iAdd�� ���� ���ؼ� first / second �߿� ���� ���ڸ� ã��
    for (int i = 1; i <= iCount; ++i)
    {
        iAdd += i;
        if (iAdd >= iCount)
        {
            iIndex = i;
            break;
        }

    }

    //�� �ʱ�ȭ
    int iFirst(0);
    int iSecond(0);

    //���� �ִ밪�� �ִ� n��° ���� ã�Ƽ� ��
    int iPrev = ((iIndex - 1) * (2 + (iIndex - 2))) * 0.5f;

    //iPrev���� �ִ밪�� ���� �ּҰ��� ���ؼ� ���� ����
    //iIndex�� ¦���� ���� Ȧ���϶� �ּ�,�ִ��� �ٸ�
    int iValue = iCount - iPrev - 1;
    if (iIndex % 2 == 0)
    {
        iSecond = iIndex - iValue;
        iFirst = 1 + iValue;
    }
    else
    {
        iFirst = iIndex - iValue;
        iSecond = 1 + iValue;
    }

    //�� ���
    cout << iFirst << "/" << iSecond;





    return 0;
}