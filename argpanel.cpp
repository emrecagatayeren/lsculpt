#include "argpanel.h"

ArgPanel::ArgPanel(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ArgPanel)
{
    ui->setupUi(this);
    connect(ui->runLSculptBtn, SIGNAL(clicked()), this, SIGNAL(runLSculptBtnClicked()));
}

ArgPanel::~ArgPanel()
{
    delete ui;
}

void ArgPanel::changeEvent(QEvent *e)
{
    QWidget::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
