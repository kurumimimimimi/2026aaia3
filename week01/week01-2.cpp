//week01-2.cpp
#include <iostream>
int main()
{

	int N;
	std::cin>>N; ///c++¿é¤J¸ê®Æ ¼Ð·Ç::¿é¤J °e¨ì¥kÃäN
	int b=N,ans=0;
	while(N>0){
	ans=ans*10+N%10;
		N=N/10;
		}
	std::cout<<b<<ans<<b+ans;//WRONG ANSWER
	// std::cout<<b<<"+"<<ans<<"="<<b+ans<<std::endl;
	// std::cout<<b<<"+"<<ans<<"="<<b+ans<<"\n";
	// printf("%d+%d=%d\n",b,ans,b+ans);

}
