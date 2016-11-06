docker rm -f kurian-cpp-dev
docker run  --name kurian-cpp-dev -it \
-v $PWD/code:/home \
-v $PWD/vim:/.vim \
$1 /bin/bash 
