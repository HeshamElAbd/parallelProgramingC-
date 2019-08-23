/* @Author: Hesham EL Abd
 * @Description: Deep Antigen Screening DAS version 2
 * @ Data: 23/08/2019
 * */
#include <iostream>
#include "header/utility.h"
#include<vector>
#include<future>
#include<cmath>
struct dumTest{
public:
	std::string testname;
	int count;
	std::vector<int> dumVec;

	dumTest(const std::string &tname,const int &cot){
		testname=tname;
		count=cot;
		fillVector();
	}

	void fillVector(void){
		for(int idx=0; idx<pow(count,count);idx++){
			dumVec.emplace_back(idx);
		}
	}

	std::vector<int> getResults(void){
		return std::move(dumVec);
	}

};
std::vector<int> getData(const std::string &name, const int &dumint){
	dumTest dum_struct=dumTest(name,dumint);
	return std::move(dum_struct.getResults());
}



int main(void){
	std::vector<std::string> names={"test1","test2","test3","test4","test5"};
	std::vector<int> counts={1,2,3,4,5};
	std::vector<std::future<std::vector<int>>> myresults;
	for (int idx=0;idx<names.size();idx++){
		myresults.push_back(std::async(getData, names[idx],counts[idx]));
	}
	for (auto &res:myresults){
		auto dum_vec=res.get();
		for(auto iter= dum_vec.begin();iter!=dum_vec.end();iter++){
			std::cout<<*iter<<std::endl;
		}
	}
}
