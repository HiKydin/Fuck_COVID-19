# Fuck_COVID-19

基于c++开发的疫情社区管理软件，祝疫情早日结束！

### 功能实现：

* 人员管理
* 健康情况上报
* 健康码出示
* 社区团购

### 项目结构：

![程序框架](https://raw.githubusercontent.com/HbiZHI/Gallery/main/202205271407085.png)

### 项目日志：

v0.0.1：

首先培养自己项目搭建时的良好习惯：将文件分类。

这里我将项目所需要用到的头文件、静态变量、函数声明等放在`/include`里。所以你可以看到`/include`里的文件都是.h结尾的。

同时将所有的源代码都放到`/src`中。

目前的结构为：

~~~
.
|-- README.md
|-- include/
|   |-- initdata.h
|   |-- mainInterface.h
|   `-- pushData.h
|-- src/
|   |-- initdata.cpp
|   |-- main.cpp
|   |-- mainInterface.cpp
|   `-- pushData.cpp
~~~

接下来就是愉快地敲代码啦！

