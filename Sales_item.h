class Sales_item{
public:
	std::string ISBN;
	int NumbersofSale;
	double price;
	//一般使用double而不使用float，因为float会有精度损失，而double引入双精度却没有带来什么性能损失
};
//一般类的定义放在头文件里
//private:只能被该类的函数访问
//protected:可以被该类的函数和子类的函数访问
//public:可以被该类的函数和子类的函数和该类的对象访问
//class默认成员都是private
//struct默认成员都是public