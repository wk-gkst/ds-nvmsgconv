ARG NDS_VERSION=6.1
FROM nvcr.io/nvidia/deepstream:${NDS_VERSION}-devel

WORKDIR /nvds

ADD ./deepstream_schema ./deepstream_schema
ADD ./* ./

RUN make
#&& make install

CMD ["python3"]