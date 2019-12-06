//Final Output

std::vector<Tensor*> Output;

status = LoadNetFromTensorFlow(*netFixedToFloat,aResultGraph,floatInterm,Output);
if(States_t::SUCCESS != status || Output.empty()){
	std::cout<<"Failed to load net" << std::endl;
	return {};
}
status = netFixedToFloat -> SetTargetHint(target::REF);
if(Status_t::SUCCESS ! = status){
	std::cout << "Set target failed" << std::endl;
	return {};
}

status = netFixedToFloat -> Prepare();
if(Status_t::SUCCESS != status){
	std::cout<< " Net verfication failed" <<std::endl;
}

/*
commit1、loadnetfromtensorflow 

确实非常不容易理解，在 C++ 代码中如何实现的






*/