using namespace std;

#include <iostream>

int main()
{
    //값 초기화
    int iCount(0);
    int iAdd(0);
    int iIndex(0);

    cin >> iCount;

    //iAdd에 값을 더해서 first / second 중에 높은 숫자를 찾음
    for (int i = 1; i <= iCount; ++i)
    {
        iAdd += i;
        if (iAdd >= iCount)
        {
            iIndex = i;
            break;
        }

    }

    //값 초기화
    int iFirst(0);
    int iSecond(0);

    //이전 최대값의 최대 n번째 값을 찾아서 뺌
    int iPrev = ((iIndex - 1) * (2 + (iIndex - 2))) * 0.5f;

    //iPrev에서 최대값을 뺴고 최소값을 더해서 값을 구함
    //iIndex가 짝수일 때와 홀수일때 최소,최댓값이 다름
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

    //값 출력
    cout << iFirst << "/" << iSecond;





    return 0;
}