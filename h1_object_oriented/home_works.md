## week1

为Date类实现如下成员：

1. 构造器，可以初始化年、月、日。

2. 大于、小于、等于（> 、< 、==）操作符重载，进行日期比较。

3. print() 打印出类似 2015-10-1 这样的格式。



然后创建两个全局函数：

1. 第1个函数 CreatePoints生成10个随机的Date，并以数组形式返回；

2. 第2个函数 Sort 对第1个函数CreatePoints生成的结果，将其按照从小到大进行排序。



最后在main函数中调用CreatePoints，并调用print将结果打印出来。然后调用Sort函数对前面结果处理后，并再次调用print将结果打印出来。

```
class Date
{
    int year;
    int month;
    int day;
};
```

## week2

为 Rectangle 类实现构造函数,拷贝构造函数,赋值操作符,析构函数。

```
class Shape
{
   int no;
};
class Point
{
   int x;
   int y;
};
class Rectangle: public Shape
{
   int width;
   int height;
   Point * leftUp;
public:
   Rectangle(int width, int height, int x, int y);
   Rectangle(const Rectangle& other);
   Rectangle& operator=(const Rectangle& other);
   ~Rectangle();
};
```

## week3

为下面的 Rectangle 和 Circle 类重写 getArea 虚函数。然后创建一个数组。 使用一个循环,生成 10 个 Rectangle、10 个 Circle,根据循环遍历顺序为它 们设置 no 编号,位置、长、宽、半径等其他信息取随机 1~10 之间的整数值, 然后将它们加入到创建好的数组中。最后,将这个长度为 20 的数组中所有面 积小于 50 的形状删除。将剩下的形状组成一个新的数组返回。

注意: 1. 补齐任务所需的其他函数。2. 考虑正确的内存管理。3. 使用原生数 组,不使用 vector 等容器。

```
class Shape
{
int no;
public:
virtual int getArea()=0;
};
class Point
{
int x;
int y;
};
class Rectangle: public Shape
{
int width;
int height;
Point leftUp;
};
class Circle: public Shape
{
Point center;
int radius;
};
```C++

## week4

1. 分别给出下面的类型Fruit和Apple的类型大小（即对象size），并通过画出二者对象模型图以及你的测试来解释该size的构成原因。

```
class Fruit{test
   int no;
   double weight;
   char key;
public:
   void print() {   }
   virtual void process(){   }
};

class Apple: public Fruit{
   int size;
   char type;
public:
   void save() {   }
   virtual void process(){   }
};
```

## week5
 为上周题目中的 Fruit和Apple 添加 构造函数与 析构函数， 并在构造函数与析构函数中打印控制台信息，观察构造和析枸调用过程。然后为Apple类重载::operator new和 ::operator delete，在控制台打印信息，并观察调用结果。