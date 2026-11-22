#include <iostream>
#include <cassert>
#include <string>

class FrontendApp {
public:
    bool loadProducts(int serverStatus) {
        if (serverStatus == 200) return true;
        else return false;
    }

    std::string handleBuyClick(int quantity) {
        if (quantity > 0) return "Запрос на покупку отправлен на сервер!";
        else return "Ошибка: количество товаров должно быть больше 0";
    }
};

void testLoadProductsSuccess() {
    FrontendApp app;
    assert(app.loadProducts(200) == true);
    std::cout << "Test 1 (Load Success) passed!" << std::endl;
}

void testLoadProductsFailure() {
    FrontendApp app;
    assert(app.loadProducts(500) == false);
    std::cout << "Test 2 (Load Failure) passed!" << std::endl;
}

void testHandleBuyClickSuccess() {
    FrontendApp app;
    assert(app.handleBuyClick(1) == "Запрос на покупку отправлен на сервер!");
    std::cout << "Test 3 (Buy Success) passed!" << std::endl;
}

void testHandleBuyClickNegative() {
    FrontendApp app;
    assert(app.handleBuyClick(-5) == "Ошибка: количество товаров должно быть больше 0");
    std::cout << "Test 4 (Buy Negative) passed!" << std::endl;
}

int main() {
    std::cout << "Запуск юнит-тестов..." << std::endl;
    testLoadProductsSuccess();
    testLoadProductsFailure();
    testHandleBuyClickSuccess();
    testHandleBuyClickNegative();
    std::cout << "Все тесты успешно пройдены!" << std::endl;
    return 0;
}