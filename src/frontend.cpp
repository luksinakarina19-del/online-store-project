/**
 * @file frontend.cpp
 * @brief Клиентская часть (Frontend) интернет-магазина.
 * @details Содержит класс для управления пользовательским интерфейсом.
 */

#include <iostream>
#include <string>

/**
 * @class FrontendApp
 * @brief Класс для управления клиентским интерфейсом.
 * @details Отвечает за загрузку товаров и обработку нажатий кнопок.
 */
class FrontendApp {
public:
    /**
     * @brief Загружает список товаров с сервера.
     * @details Выполняет запрос к API и выводит названия товаров в консоль.
     * @return void
     */
    void loadProducts() {
        std::cout << "Загрузка товаров с сервера..." << std::endl;
        // Здесь был бы fetch-запрос
    }

    /**
     * @brief Обработчик клика по кнопке "Купить".
     * @details Показывает пользователю сообщение о подтверждении покупки.
     * @return void
     */
    void handleBuyClick() {
        std::cout << "Запрос на покупку отправлен на сервер!" << std::endl;
    }
};

/**
 * @brief Точка входа в клиентское приложение.
 * @return int Код завершения программы.
 */
int main() {
    FrontendApp app;
    app.loadProducts();
    app.handleBuyClick();
    return 0;
}