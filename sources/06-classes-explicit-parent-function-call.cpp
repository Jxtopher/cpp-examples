#include <iostream>
#include <cstdlib>
#include <string>

class Author {
    std::string m_name;

    public:
    Author(std::string name): m_name(name) {

    }

    std::string get_name() {
        return m_name;
    }
};

class Editor {
    std::string m_name;

    public:
    Editor(std::string name): m_name(name) {

    }

    std::string get_name() {
        return m_name;
    }
};

class Book : private Author, private Editor {
    std::string m_name;

    public:
    Book(std::string author_name, std::string editor_name, std::string book_name) : Author(author_name), Editor(editor_name), m_name(book_name) {

    }

    std::string get_author_name() {
        return this->Author::get_name();
    }

    std::string get_editor_name() {
        return this->Editor::get_name();
    }
};

int main() {
    Book book("Garey Johnson", "W.H. Freeman and company New York", "Computers and intractability");
    std::cout<<book.get_author_name()<<std::endl;
    return EXIT_SUCCESS;
}
