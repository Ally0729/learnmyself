//extern int age;//只声明不定义

//const变量如果用常量表达式初始化，那么可以将其放在头文件中定义初始化，要使用const变量的文件只需要包含该头文件即可
//如果const变量不是用常量表达式初始化，那么需要在源文件中定义初始化，加关键字extern，要使用const变量的文件只需要写extern const...声明即可，保证其他文件可使用该变量