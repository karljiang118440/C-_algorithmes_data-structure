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
int dimH = fixedout[0] -> Dim(2);
int dimW = fixedout[0] -> Dim(1);
int dimC = fixedout[0] -> Dim(0);

Tensor* flaotInterm = netFixedToFloat -> AddTensor(std::unique_ptr<Tensor>(Tensor::Create<>(
					  "FLOAT_INTERM_TENSOR",DataType_t::FLOAT,
					  TensorShape<TensorFormat_t::NHWC>{dimN,dimH,dimW,dimC},
					  TensorLayout<TensorFormat_t::NHWC>())));
					  
floatInterm -> Allocate(Allocate_t::HEAP);

















					  