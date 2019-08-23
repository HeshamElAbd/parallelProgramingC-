/* @Author: Hesham EL Abd
 * @Description: Deep Antigen Screening DAS version 2
 * @ Data: 23/08/2019
 * */
#include <iostream>
#include<vector>
#include<future>
#include<cmath>
int main(int argc, char ** argv){
	if (argc==1){
		std::cout<<"you have not entered any parameter"<<std::endl;
		return 0;
	} else{
		std::cout<<"you have entered:  "<<argc<<std::endl;
		std::cout<<"your parameters are:"<<std::endl;
		for (int i=1; i <argc; i++){
			std::cout<<" parameter number: "<<i << " value: "<<argv[i]<<std::endl;
		}
		return 0;
	}

}
