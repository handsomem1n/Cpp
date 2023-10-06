int main()
{
    try
    {
        if (x)
        {
            throw 1;
        }
        if (v)
        {
            throw 'a';
        }
        M1 // M1은 예외가 발생하지 않은 경우 실행되는 일반적인 코드입니다.
    }
    catch (int e)
    {
        M2 // int 예외를 처리하기 위해 실행되는 코드
    }
    catch (char e)
    {
        МЗ
    }
            M4 //  M4는 catch 블록 밖에서 실행되는 일반적인 코드
    
}