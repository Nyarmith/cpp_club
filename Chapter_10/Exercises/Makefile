all: build
	for i in build/bin/*_unittest; do echo $$i && ./$$i; done

build:
	[ ! -d build ] && mkdir build; \
	cd build \
	&& conan install .. --build=missing \
	&& cmake .. -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Release \
	&& cmake --build .

clean:
	rm -rf build
