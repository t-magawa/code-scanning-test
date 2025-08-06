SRCS = main.c add.c
OBJS = $(SRCS:.c=.o)
CC = gcc
CFLAGS = -Wall

all: myapp
myapp: $(OBJS)
	$(CC) $(CFLAGS) -o myapp $(OBJS)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OBJS) myapp
.PHONY: all clean
# この Makefile は、「myapp」というシンプルな C アプリケーションをビルドするために使用されます。
# ソースファイル main.c と add.c をオブジェクトファイルにコンパイルし、リンクして最終的な実行ファイルを作成します。
# 「clean」ターゲットは、オブジェクトファイルと実行ファイルを削除します。
# アプリケーションをビルドするには、「make」を実行します。
# ビルド成果物をクリーンアップするには、「make clean」を実行します。
# この Makefile は CodeQL GitHub Action で動作するように設計されており、
# 「manual」ビルドモードと互換性があります。
# ソースファイルは Makefile と同じディレクトリにあることを前提としています。
# 「manual」ビルドモードを使用している場合は、CodeQL ワークフローの「build」ステップのコマンドを、コードをビルドするためのコマンドに置き換えてください。
# 例:
# make
# make clean
