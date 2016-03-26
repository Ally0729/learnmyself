class Sales_item{
public:
	std::string ISBN;
	int NumbersofSale;
	double price;
	//一般使用double而不使用float，因为float会有精度损失，而double引入双精度却没有带来什么性能损失
};