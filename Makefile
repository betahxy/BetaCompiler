TARGET := betacompiler

all:
	@meson setup .build
	@cd .build && meson compile
run: all
	@.build/src/${TARGET}

clean:
	rm -rf .build 
