

template<typename T> std::vector<std::pair <int ,float>> processResults(T* aResults,int aNumResults)
{
	std::vector<std::pair<int,float>> results[i]));
	for(int i=0;i<aNumResults;i++){
		std::pair<int ,T> pair(i,(float)(aResults[i]));
		resultsPairs.push_back(pair);
	}
}
std::sort(resultParis.begin(),resultPairs.end,[](std::pair<int,T>left,std::pair<int,T>right){
	return left.second > right.second;
});

return resultParis;
}

std::vector<std::pair<int,float>> case_mobilenet_target(const std::string &aMnetGraph,
														const std::string &aResultGraph,
														const std::string &aImageFile,
														const std::string &aSlimLabelsFile,
														const std::string &target
														)