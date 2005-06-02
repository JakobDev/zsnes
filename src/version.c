/*
Copyright (C) 1997-2005 ZSNES Team ( zsKnight, _Demo_, pagefault, Nach )

http://www.zsnes.com
http://sourceforge.net/projects/zsnes

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either
version 2 of the License, or (at your option) any later
version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/

#include <string.h>

char *VERSION_STR;

//Place compilation date at the end of VERSION_STR
void placedate()
{
  strcpy(VERSION_STR +
         strlen(VERSION_STR) -
         strlen(__DATE__), __DATE__);
}

//Place compilation time at the end of VERSION_STR
void placetime()
{
  strcpy(VERSION_STR +
         strlen(VERSION_STR) -
         strlen(__TIME__), __TIME__);
}


