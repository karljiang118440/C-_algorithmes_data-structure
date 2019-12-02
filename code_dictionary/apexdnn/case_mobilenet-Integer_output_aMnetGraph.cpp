// Interger output of the aMnetGraph except the last 3 layers
std::vector<Tensor*> fixedOutput;

status = LoadNetFromTensorFlow(*net_mobile,aMnetGraph,lApexNetInput,fixedOutput);
if(status_t:SUCCESS != status || fixedOutput.empty()){
	std::cout<<"load net failed"<<std::endl;
	return{};
}

if(target == "APEX")
{
	status = net_mobile -> SetTargetHint(Target::APEX)
	if(status_t::SUCCESS!=status){
		std::cout<<"set APEX target failed"<<std::endl;
		return{};
	}
}
else{
	status = net_mobile -> SetTargetHint(Target::REF)
	if(status_t::)
}



status = net_mobile -> Prepare();
if(status_t::SUCCESS != status){
	std::cout << "Net verification failed"<<std::endl;
	return{};
}

int dimN= fixedout[0] -> Dim(3);
itn dimH = fixedout[0] -> Dim(2);

















					  