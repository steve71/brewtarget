/*
 * StyleComboBox.h is part of Brewtarget, and is Copyright Philip G. Lee
 * (rocketman768@gmail.com), 2009-2011.
 *
 * Brewtarget is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * Brewtarget is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _STYLECOMBOBOX_H
#define   _STYLECOMBOBOX_H

class StyleComboBox;

#include <QComboBox>
#include <QWidget>
#include <QMetaProperty>
#include <QVariant>
#include <QList>

// Forward declarations.
class Recipe;
class Style;

class StyleComboBox : public QComboBox
{
   Q_OBJECT

public:
   StyleComboBox(QWidget* parent=0);
   virtual ~StyleComboBox() {}
   void observeRecipe(Recipe* rec);
   void addStyle(Style* style);
   void removeStyle(Style* style);
   void setIndexByStyle(Style* style);
   void repopulateList();

   Style* getSelected();

public slots:
   void changed(QMetaProperty,QVariant);

private:
   QList<Style*> styles;
   Recipe* recipe;
};

#endif   /* _STYLECOMBOBOX_H */

