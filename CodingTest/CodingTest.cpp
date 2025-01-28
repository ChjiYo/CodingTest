using namespace std;

#include <iostream>

int main()
{
    
    int iCount(0);
    int iAdd(0);
    int iIndex(0);

    cin >> iCount;

    for (int i = 1; i <= iCount; ++i)
    {
        iAdd += i;
        if (iAdd >= iCount)
        {
            iIndex = i;
            break;
        }

    }

    int iFirst(0);
    int iSecond(0);

    int iPrev = ((iIndex - 1) * (2 + (iIndex - 2))) * 0.5f;

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

    cout << iFirst << "/" << iSecond;

    return 0;
}