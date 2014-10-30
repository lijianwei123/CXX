#!/bin/sh
filename=$1
if test -z "$filename"; then
	echo "compile filename is empty!"
	exit 1
fi
#see  http://www.cnblogs.com/chengmo/archive/2010/10/02/1841355.html
objname=${filename%%.cpp}
g++ -g $filename -o $objname
