function gcc-compile-fortify
    gcc -std=c17 -Wall -Wextra -pedantic -Werror -D_FORTIFY_SOURCE=2 $argv
end
