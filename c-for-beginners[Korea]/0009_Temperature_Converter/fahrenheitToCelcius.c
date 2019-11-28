//Joy는 캐나다에서온 온도를 섭씨로 측정하는 것이다.

//Joy가 미국에 갔는데 온도가 항상 화씨로 측정된다는 문제를 발견했다.
//온도 변환 공식을 알고, Joy가 화씨를 섭씨로 변환할 수 있도록 도와주세요.
#include<stdio.h>
 
void main()
{
    float cels, fahr;
 
    //화씨를 입력받는다
    printf("\n화씨를 입력하세요:");
    scanf("%f",&fahr);
 
    //화씨를 섭씨로 변환하는 공식
    cels = (fahr - 32) * 5 / 9;

    //결과출력
    printf("\n Celsius = %.3f", cels); //소숫점 자리까지 출력하여 정확도를 높임
}