FROM ubuntu:16.10

RUN apt-get -y update
ADD ./bashrc /root/.bashrc
RUN mkdir /home/code
RUN apt-get install -y build-essential 
RUN apt-get install -y libc6-dbg gdb
WORKDIR /home/code
