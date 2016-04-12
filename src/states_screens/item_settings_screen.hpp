//  SuperTuxKart - a fun racing game with go-kart
//  Copyright (C) 2009-2015 Marianne Gagnon
//            (C) 2014-2015 Joerg Henrichs
//
//  This program is free software; you can redistribute it and/or
//  modify it under the terms of the GNU General Public License
//  as published by the Free Software Foundation; either version 3
//  of the License, or (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.


#ifndef HEADER_ITEM_SETTINGS_SCREEN_HPP
#define HEADER_ITEM_SETTINGS_SCREEN_HPP

#include "guiengine/screen.hpp"

namespace GUIEngine
{
    class CheckBoxWidget;
    class IconButtonWidget;
    class LabelWidget;
    class SpinnerWidget;
    class Widget;
}
class Track;

/**
 * \brief Screen that allows the user to toggle items in a race.
 * \ingroup states_screens
 */
class ItemSettingsScreen : public GUIEngine::Screen,
                           public GUIEngine::ScreenSingleton<ItemSettingsScreen?
{

    static const int NUM_ITEMS = 7

    /** The checkboxes for the item toggles. */
    GUIEngine::CheckBoxWidget* m_bubblegum;
    GUIEngine::CheckBoxWidget* m_cake;
    GUIEngine::CheckBoxWidget* m_bowling;
    GUIEngine::CheckBoxWidget* m_zipper;
    GUIEngine::CheckBoxWidget* m_plunger;
    GUIEngine::CheckBoxWidget* m_switch;
    GUIEngine::CheckBoxWidget* m_swatter;
    GUIEngine::CheckBoxWidget* m_rubberball;
    GUIEngine::CheckBoxWidget* m_parachute;
    GUIEngine::CheckBoxWidget* m_anvil;

public:

    ItemSettingsScreen();
    virtual ~ItemSettingsScreen();

    virtual void init();
    virtual void loadedFromFile();
    virtual void eventCallback(GUIEngine::Widget *,const std::string &name ,
                               const int player_id);

    void setTrack(Track *track);

};
