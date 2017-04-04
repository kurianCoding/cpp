docker rm -f cppDev
docker run --name cppDev \
	-ti \
	--hostname="cpp-dev"\
	-v $PWD/../code:/home/code \
	--env-file=$PWD/../conf/cpp.env \
	 $1 /bin/bash
