docker rm -f cppDev
docker run --name cppDev \
	-ti \
	-v $PWD/../code:/home/code \
	--env-file=$PWD/../conf/cpp.env \
	 $1 /bin/bash
