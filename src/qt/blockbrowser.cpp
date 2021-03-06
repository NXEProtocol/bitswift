#include "blockbrowser.h"
#include "ui_blockbrowser.h"

#include "clientmodel.h"
#include "walletmodel.h"
#include "bitcoinunits.h"
#include "optionsmodel.h"
#include "transactiontablemodel.h"
#include "transactionfilterproxy.h"
#include "guiutil.h"
#include "guiconstants.h"

#include <QAbstractItemDelegate>
#include <QPainter>

#include "blockbrowser.moc"

BlockBrowser::BlockBrowser(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BlockBrowser),
    clientModel(0)
{
    ui->setupUi(this);        
}

BlockBrowser::~BlockBrowser()
{
    delete ui;
}

void BlockBrowser::setModel(ClientModel *model)
{
    this->clientModel = model;
}