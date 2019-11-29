// creating a new workspace

auto net_mobile = std::unique_ptr<Graph>(new Graph (lWorkspace.get()));

auto netFixedToFloat = std::unique_ptr<Graph>(new Graph(lWorkspace.get()));


Tensor* lApexNetInput = net_mobile -> AddTensor(std::unique_ptr<Tensor>(Tensor::Create<>(
					  "NET_INPUT_TENSOR",DataType_t::SIGNED_8BIT,
					  TensorShape<TensorFormat_t::NHWC>{1,224,224,3},
					  TensorLayout<TensorFormat_t::NHWC>())));
					  
lApexNetInput->SetQuantParames({QuantInfo(-1,0)});
lApexNetInput->Allocate(Allocate_t:OAL);
					  