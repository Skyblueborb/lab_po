SRC_DIR = .
BIN_DIR = bin

SOURCES := $(shell find $(SRC_DIR) -name "*.java")

all: compile

compile:
	@mkdir -p $(BIN_DIR)
	@javac -d $(BIN_DIR) $(SOURCES)
	@echo "Compiled $(words $(SOURCES)) files."

run:
	@if [ -z "$(CLASS)" ]; then \
		echo "Error: Please specify the class to run."; \
		echo "Usage: make run CLASS=your.package.ClassName"; \
	else \
		java -cp $(BIN_DIR) $(CLASS); \
	fi

clean:
	rm -rf $(BIN_DIR)

.PHONY: all compile run clean
