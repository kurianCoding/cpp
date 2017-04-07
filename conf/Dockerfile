FROM ubuntu:16.10

RUN apt-get -y update
RUN mkdir /home/code
RUN apt-get install -y build-essential
RUN apt-get -y update
RUN apt-get install -y git wget
ADD ocv.sh /ocv.sh
ADD bashrc /root/.bashrc
RUN sh /ocv.sh
WORKDIR /home/code
