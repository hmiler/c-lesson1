////23

//#include <bitset>
//#include <iostream>
//
//std::bitset<4> rotl(std::bitset<4> bits)
//{
//	const bool leftbit{ bits.test(3) };
//
//	bits <<= 1; 
//
//	if (leftbit)
//		bits.set(0);
//
//	return bits;
//}
//
//int main()
//{
//	int n{ 8 }, k{ 2 };
//	std::bitset<4> bs(n);
//	
//
//	for (int i =0 ; i < k; i++)
//	{
//		bs = rotl(bs);
//	}
//	    std::cout << bs << '\n';
//
//	return 0;
//}

/////24
//
//#include <bitset>
//#include <iostream>
//
//int myxor(int num1, int num2) {
//    return((num1 | num2) - (num1 & num2));
//}
//
//int main()
//{
//	int num1{55}, num2{23};
//	std::cout << std::bitset<8>(num1) <<'\t' << "xor" << '\t' << std::bitset<8>(num2) << '\t'
//		<< "=" << '\t' << std::bitset<8>(myxor(num1, num2));
//return 0;
//}

////////20
//#include <bitset>
//#include <iostream>
//
//std::bitset<16> ReplaceEvenWithOdd(int number) {
//	int even = 0b1010101010101010;
//	even &= number;
//	int odd = 0b0101010101010101;
//	odd &= number;
//    return (even >> 1) | (odd << 1);
//}
//
//int main()
//{
//	int num = 7616;
//	std::cout << "the replace number in binary is: " << ReplaceEvenWithOdd(num);
//}
// 
// 
// ///////////41
//#include <bitset>
//#include <iostream>
//
//int squareOfNumber(int number) {
// if(number<0){
//   number*=-1;
// }
//	int sum = 0;
//	for (int i = 0,j=1; i < number; i ++,j+=2) {
//		sum += j;
//	}
//	return sum;
//}
//
//
//int main() {
//	int num = -4;
//	std::cout << "the squre of " << num << " is: " << squareOfNumber(num);
//}
//////////47
//#include <iostream>
//
//int returnMin(int num1, int num2) {
//    return num2 + ((num1-num2) & ((num1 - num2) >> 7));
//}
//
//int returnMax(int num1, int num2) {
//    return num1 - ((num1 - num2) & ((num1 - num2) >> 7));
//}
//
//int main()
//{
//    int num1 = 5, num2 = 9;
//
//    std::cout << "The min number is " << returnMin(num1,num2) << '\n';
//    std::cout << "The max number is " << returnMax(num1,num2) << '\n';
//
//    return 0;
//}