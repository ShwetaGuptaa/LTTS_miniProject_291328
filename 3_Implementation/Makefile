# Name of the project
PROJECT_NAME = Calculator
TEST_PROJ_NAME = Test_$(PROJ_NAME)

BUILD_DIR = Build

# All source code files
SRC = project_main.c\
src/calculator_operations.c

# All test source files
TEST_SRC = test/test_calculator_operations.c\
unity/unity.c\

INC = -Iinc\
-Iunity

#To check if the OS is Windows or Linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
   IN= 
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
	  IN=-lm
   endif
endif

# Makefile will not run target command if the name with file already exists. To override, use .PHONY
.PHONY : all run test coverage cppcheck valgrind clean

all:$(BUILD_DIR)
	gcc  $(SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC)) $(IN)

run: all
	$(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

test: $(SRC) $(TEST_SRC)
	gcc $^ $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC)) $(IN)
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))

coverage:${PROJECT_NAME}
	gcc -fprofile-arcs -ftest-coverage $(SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC)) $(IN)
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	gcov -a $(SRC)

cppcheck: $(SRC)
	cppcheck --enable=all  $(SRC)
valgrind:
	valgrind $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

doc:
	make -C doc
$(BUILD_DIR):
	mkdir $(BUILD_DIR)

clean:
	$(RM) $(call FixPath,$(BUILD_DIR)/*)
	make clean -C doc
	rmdir $(BUILD_DIR) doc/html
