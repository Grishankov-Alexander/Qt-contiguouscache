#include "randomlistmodel.h"
#include <QListView>
#include <QApplication>

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    QListView view;
    view.setUniformItemSizes(true);
    view.setModel(new RandomListModel(&view));
    view.show();
    return app.exec();
}
