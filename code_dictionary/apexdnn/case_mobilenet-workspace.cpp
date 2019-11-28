// creating a new workspace

TargetInfo lRefInfo = TargetInfo();
ApexTargetInfo lApexInfo = ApexTargetInfo();
auto lWorkspace = std::unique_ptr<Workspace>(new Workspace(std::map<std::string,TargetInfo*>{
	{target::REF,&lRefInfo},{target::APEX,&lApexInfo}}));