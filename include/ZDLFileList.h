/*
 * This file is part of qZDL
 * Copyright (C) 2007-2010  Cody Harris
 * Copyright (C) 2018-2019  Lcferrum
 *
 * qZDL is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _ZFILELIST_H_
#define _ZFILELIST_H_
#include "ZDLListWidget.h"
class ZDLFileList : public ZDLListWidget{
	Q_OBJECT
	public:
		ZDLFileList(QString savekey, ZDLWidget *parent);
	protected:
		virtual void editButton(QListWidgetItem * item);
		virtual void editButton(const QList<QListWidgetItem*> &items);
		virtual void editButton();
		virtual void addButton();
		virtual void rebuild();
		virtual void newConfig();
		virtual void newDrop(QStringList fileList);
		bool basic_fileopendialog;
		QString savekey;
	protected slots:
		void folderButton();
};

#endif

