/*
 * This file is part of the xTuple ERP: PostBooks Edition, a free and
 * open source Enterprise Resource Planning software suite,
 * Copyright (c) 1999-2014 by OpenMFG LLC, d/b/a xTuple.
 * It is licensed to you under the Common Public Attribution License
 * version 1.0, the full text of which (including xTuple-specific Exhibits)
 * is available at www.xtuple.com/CPAL.  By using this software, you agree
 * to be bound by its terms.
 */

#ifndef LOCALES_H
#define LOCALES_H

#include "guiclient.h"
#include "xwidget.h"

#include "ui_locales.h"

class locales : public XWidget, public Ui::locales
{
    Q_OBJECT

public:
    locales(QWidget* parent = 0, const char* name = 0, Qt::WFlags fl = Qt::Window);
    ~locales();

public slots:
    virtual void sNew();
    virtual void sEdit();
    virtual void sCopy();
    virtual void sView();
    virtual void sDelete();
    virtual void sFillList();

protected slots:
    virtual void languageChange();

};

#endif // LOCALES_H
