#!/bin/bash

echo "Please select a class name"
read class

echo "please select between private and protected"
read permissions

echo "Do you wish an abstract class? type virtual with a space or push enter"
read abstract

CLASS=$(echo "$class" | tr '[:lower:]' '[:upper:]')
HEADER="_HPP"
INCLUSION=${CLASS}${HEADER}

#create directories if they don't exist
mkdir -p incs srcs

#create files
touch incs/$class.hpp srcs/$class.cpp

#Header configuration

#definition and header
echo "#ifndef $INCLUSION
# define $INCLUSION

# include <iostream>
# include <iostream>

" > incs/$class.hpp

#class declaration
echo "class $class
{
    $permissions:
        " >> incs/$class.hpp
echo "    public:
        $class();
        $class($class &source);
        $class& operator=($class &source);
        $abstract~$class();
};

#endif" >> incs/$class.hpp

#class definition

echo "#include \"$class.hpp\"

" > srcs/$class.cpp

#default constructor

echo "$class::$class()
{
    std::cout << \"$class default constructor called\" << std::endl;
}

" >> srcs/$class.cpp

#copy constructor

echo "$class::$class($class &source)
{
    std::cout << \"$class copy constructor called\" << std::endl;
    *this = source;
}

" >> srcs/$class.cpp

#copy assignment

echo "$class& $class::operator=($class &source)
{
    std::cout << \"$class copy assignment called\" << std::endl;
    *this = source;
    return(*this);
}

" >> srcs/$class.cpp

#destructor

echo "$class::~$class()
{
    std::cout << \"$class destructor called\" << std::endl;
}
" >> srcs/$class.cpp
