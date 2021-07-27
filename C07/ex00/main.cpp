#include "whatever.hpp"

int main(void)
{
    int a= 42;
    int b = 43;

    std::string s1 = "abc";
    std::string s2 = "def";

	char c1 = 'a';
	char c2 = 'b';

    std::cout << "***INT***" << std::endl << "a = " << a << " | b = " << b <<std::endl;
    ::swap(a, b);
    std::cout << "swap(a, b)" << std::endl << "a = " << a << " | b = " << b <<std::endl;
    std::cout <<"min(a, b) = " << ::min(a,b) <<std::endl;
    std::cout <<"max(a, b) = " << ::max(a,b) <<std::endl << std::endl << std::endl;
	
	std::cout << "***CHAR***" << std::endl << "c1 = " << c1 << " | c2 = " << c2 <<std::endl;
    ::swap(c1, c2);
    std::cout << "swap(c1, s2)" << std::endl << "c1 = " << c1 << " | c2 = " << c2 <<std::endl;
    std::cout <<"min(c1, c2) = " << ::min(c1,c2) <<std::endl;
    std::cout <<"max(c1, c2) = " << ::max(c1,c2) <<std::endl << std::endl;

    std::cout << "***STR***" << std::endl << "s1 = " << s1 << " | s2 = " << s2 <<std::endl;
    ::swap(s1, s2);
    std::cout << "swap(s1, s2)" << std::endl << "s1 = " << s1 << " | s2 = " << s2 <<std::endl;
    std::cout <<"min(s1, s2) = " << ::min(s1,s2) <<std::endl;
    std::cout <<"max(s1, s2) = " << ::max(s1,s2) <<std::endl << std::endl;

	std::string 	s3 = "";
	::swap(s3, s1);


    return 0;
}
