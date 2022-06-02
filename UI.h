
#include "Service.h"
#include "Watchlist.h"

class UI{

private:

    Service* service;

public:

    UI();

    ~UI();


    void add_tutorial_ui();

    void remove_tutorial_ui();

    void update_tutorial_ui();

    void show_all_tutorials();

    void search_tutorials_ui(Watchlist* watchlist);

    void show_watchlist(Watchlist* boringWatchlist);

    void delete_watchlist_tutorials_ui(Watchlist* watchlist);

    void main_menu();

    void main_menu_user();

    void start_ui();

    Service* getService();

};
