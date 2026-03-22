SRC_DIR = pl/edu/pg/eti/ksg/po/lab2
BIN_DIR = bin

SOURCES := $(shell find $(SRC_DIR) -name "*.java")

all: compile

format:
	@if [ -n "$(SOURCES)" ]; then \
		echo "Formatting $(words $(SOURCES)) Java files..."; \
		clang-format -i --style="{Language: Java, BasedOnStyle: Google}" $(SOURCES); \
		echo "Formatting complete."; \
	else \
		echo "No Java files found to format."; \
	fi

compile: format
	@mkdir -p $(BIN_DIR)
	@javac -d $(BIN_DIR) $(SOURCES)
	@echo "Compiled $(words $(SOURCES)) files."

run: compile
	@if [ -z "$(CLASS)" ]; then \
		echo "Error: Please specify the class to run."; \
		echo "Usage: make run CLASS=your.package.ClassName"; \
	else \
		java -cp $(BIN_DIR) $(CLASS); \
	fi

clean:
	rm -rf $(BIN_DIR)

.PHONY: all format compile run clean
