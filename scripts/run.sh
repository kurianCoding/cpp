docker rm -f cppDev
docker run --name cppDev \
	-ti \
	--hostname="cpp-dev"\
	-v $PWD/../code:/home/code \
	 $1 /bin/bash
