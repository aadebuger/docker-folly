FROM  aadebuger/cplusplus

RUN apt-get update
RUN apt-get install -yq unzip
RUN apt-get install -yq git
RUN apt-get install -yq curl
RUN apt-get install -yq cmake build-essential
RUN apt-get install -yq \
    flex \
    bison \
    libkrb5-dev \
    libsasl2-dev \
    libnuma-dev \
    pkg-config \
    libssl-dev \
    libcap-dev \
    gperf \
    autoconf-archive \
    libevent-dev \
    libgoogle-glog-dev \
    wget
run apt-get -y install \
    g++ \
    automake \
    autoconf \
    autoconf-archive \
    libtool \
    libboost-all-dev \
    libevent-dev \
    libdouble-conversion-dev \
    libgoogle-glog-dev \
    libgflags-dev \
    liblz4-dev \
    liblzma-dev \
    libsnappy-dev \
    make \
    zlib1g-dev \
    binutils-dev \
    libjemalloc-dev \
    libssl-dev
WORKDIR /home
RUN git clone https://github.com/facebook/folly.git
WORKDIR /home/folly/folly
run autoreconf -ivf  
run ./configure
run make 
run make test
run make install

