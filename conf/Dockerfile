FROM ubuntu:16.10

RUN apt-get -y update
ADD ./bashrc /root/.bashrc
RUN mkdir /home/code
RUN apt-get install -y build-essential 
RUN apt-get install -y cmake git libgtk2.0-dev pkg-config libavcodec-dev libavformat-dev libswscale-dev
RUN apt-get install -y python-dev python-numpy libtbb2 libtbb-dev libjpeg-dev libpng-dev libtiff-dev libjasper-dev libdc1394-22-dev
RUN apt-get install -y libc6-dbg gdb
RUN git clone https://github.com/opencv/opencv.git /opencv
RUN cd /opencv && mkdir release && cd release && cmake -D CMAKE_BUILD_TYPE=RELEASE -D CMAKE_INSTALL_PREFIX=/usr/local ..
RUN cd /opencv/release && make && make install
WORKDIR /home/code
