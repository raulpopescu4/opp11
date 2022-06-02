
#include <QAbstractTableModel>
#include "Tutorial.h"

class WatchlistTable: public QAbstractTableModel{

private:

    std::vector<Tutorial> watchlist;

public:

    WatchlistTable(std::vector<Tutorial> watchlist);
    int rowCount(const QModelIndex& parent = QModelIndex()) const;
    int columnCount(const QModelIndex& parent = QModelIndex()) const;
    QVariant data(const QModelIndex& index, int role = Qt::DisplayRole) const;
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const;
};

