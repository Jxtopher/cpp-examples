/**
 * @brief Template de la classe Stack
 *
 * @date 2020
 * @author Jxtopher
 */

#include <cassert> // assert
#include <memory>  // std::unique_ptr

template<typename T>
class Stack {
  public:
    void push(const T& item) {
        std::unique_ptr<Stack<T>> previous = std::make_unique<Stack<T>>();
        previous->_item = item;
        if(_previous != nullptr) previous->_previous = std::move(_previous);
        _previous = std::move(previous);
    }

    T pop() {
        assert(!is_empty());
        T item = _previous->_item;
        _previous = std::move(_previous->_previous);
        return item;
    }

    bool is_empty() const {
        return _previous == nullptr;
    }

  private:
    T _item;
    std::unique_ptr<Stack<T>> _previous;
};

static void test() {
}

int main() {
    test();
    Stack<int> s;

    for(unsigned int j = 0; j < 100; j++) {
        s.push(1);
        s.push(2);
        s.push(3);
        s.push(4);

        for(unsigned int i = 0; i < 4; i++) s.pop();
    }
    return EXIT_SUCCESS;
}
