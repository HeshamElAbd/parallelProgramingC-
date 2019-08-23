/* @Author: Hesham EL Abd
 * @Description: Deep Antigen Screening DAS version 2
 * @ Data: 23/08/2019
 * */
#include <iostream>
#include<vector>
#include<future>
#include<cmath>
int main(int argc, char ** argv){
	std::cout<<"you have entered:  "<<argc<<std::endl;
	std::cout<<"your parameters are:"<<std::endl;
	for (int i=0; i <argc; i++){
		std::cout<<" parameter number: "<<i << " value: "<<argv[i]<<std::endl;
	}
	return 0;
}
