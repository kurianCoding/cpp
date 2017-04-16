FROM ubuntu:16.10

RUN apt-get -y update
RUN mkdir /home/code
RUN apt-get install -y build-essential
RUN apt-get -y update
RUN apt-get install -y g++-5
RUN apt-get install -y git wget
ADD bashrc /root/.bashrc
WORKDIR /home/code
