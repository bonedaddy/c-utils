function gcc-compile-debug
    gcc -std=c17 -Wall -Wextra -pedantic -Werror -D_FORTIFY_SOURCE=2 -g3 $argv
end