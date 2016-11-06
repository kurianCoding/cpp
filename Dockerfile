FROM ubuntu:16.10
RUN locale-gen en_US.UTF-8  
ENV LANG en_US.UTF-8  
ENV LANGUAGE en_US:en  
ENV TERM linux
ENV LC_ALL en_US.UTF-8  
RUN apt-get update
RUN apt-get install -y  curl  
RUN apt-get install -y build-essential
RUN apt-get install -y zsh tmux
RUN apt-get install -y g++-5
RUN apt-get install -y libncurses5-dev libgnome2-dev libgnomeui-dev \
    libgtk2.0-dev libatk1.0-dev libbonoboui2-dev \
    libcairo2-dev libx11-dev libxpm-dev libxt-dev python-dev \
    python3-dev ruby-dev lua5.1 lua5.1-dev libperl-dev git
RUN git clone https://github.com/vim/vim.git	/vim
RUN cd /vim && ./configure --with-features=huge \
		--enable-gui=no \
		--enable-pythonintrep=yes \
		--enable-perlintrep=yes \
		--enable-luaintrep=yes
RUN cd /vim && make && make install
RUN rm -rf /vim
ENV HOME /
ADD vimrc /.vimrc
ADD bashrc /.bashrc
ADD tmux.conf /.tmux.conf
CMD ["/bin/bash"]
