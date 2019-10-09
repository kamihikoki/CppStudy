gcc_options = -std=c++17 -Wall --pedantic-error

# ターゲット: 事前要件
#	レシピ

# $@ ターゲット名
# $< 直前の事前要件
# $^ すべての事前要件

program: main.cpp all.h all.h.gch
	g++ $(gcc_options) -include all.h $< -o $@

all.h.gch : all.h
	g++ $(gcc_options) -x c++-header -o $@ $<

run: program
	./program

clean:
	rm -rf ./program
	rm -f ./all.h.gch

.PHONY: run clean
