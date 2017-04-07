docker rm -f cppDev
docker run --name cppDev \
	-ti \
	--hostname="cpp-dev"\
	-v $PWD/../code:/home/code \
	-v $PWD/../cbin:/home/cbin \
	--env-file=$PWD/../conf/cpp.env \
	 $1 /bin/bash
