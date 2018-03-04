import sys

f = open(sys.argv[1], "w")

f.write('''# include <iostream>
void messageA()
{
    std::cout << "AProject\\n";
}
''')

f.close()
