// 実行ファイルを生成するにはプリプロセス、コンパイル、アセンブル、リンクといった処理を一括して行っている
// 1 プリプロセス : コンパイルする前の前処理
//   $ gcc -E nop.c > nop.pre.c
// 2 コンパイル : 前処理されたソースをアセンブリ言語のソースに変換
//   $ gcc -S nop.c
// 3 アセンブル : アセンブリ言語のソースを機械語のプログラムに変換
//   $ gcc -c nop.s
// 4 リンク : 必要なライブラリなどをリンク(結合)して実行ファイルを生成
//   $ ld nop.o -dynamic-linker /lib/x86_64-linux-gnu/ld-linux-x86-64.so.2 /usr/lib/x86_64-linux-gnu/{ctr1.o,ctri.o,ctrn.o} -lc
#include <stdio.h>

int
main(int argc, char *argv[])
{
}
