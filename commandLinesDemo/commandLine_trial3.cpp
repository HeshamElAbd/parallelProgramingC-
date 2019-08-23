/* @Author: Hesham EL Abd
 * @Description: Deep Antigen Screening DAS version 2
 * @ Data: 23/08/2019
 * */
#include <iostream>
#include<fstream>
#include<vector>
#include<future>
#include<unistd.h>
int main(int argc, char * argv[]){
	if (argc==1){
		std::cout<<"you have not entered any parameter. recall the program with -h to get help"<<std::endl;
		return 0;

	}else if(argc==2){
		std::string arg=argv[1];
		if(arg =="-h"){
			std::cout<<" your are now getting more help about the program"<<std::endl;
		} else {
			std::cout<<"bad input Type"<<std::endl;
		}
	} else{
		std::cout<<"you have entered:  "<<argc<<std::endl;
		std::cout<<"your parameters are:"<<std::endl;
		for (int i=1; i <argc; i++){
			std::cout<<" parameter number: "<<i << " value: "<<argv[i]<<std::endl;
		}
		return 0;
	}

}
