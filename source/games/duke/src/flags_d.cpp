//-------------------------------------------------------------------------
/*
Copyright (C) 1996, 2003 - 3D Realms Entertainment
Copyright (C) 2000, 2003 - Matt Saettler (EDuke Enhancements)
Copyright (C) 2020 - Christoph Oelckers

This file is part of Enhanced Duke Nukem 3D version 1.5 - Atomic Edition

Duke Nukem 3D is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

Original Source: 1996 - Todd Replogle
Prepared for public release: 03/21/2003 - Charlie Wiederhold, 3D Realms

EDuke enhancements integrated: 04/13/2003 - Matt Saettler

Note: EDuke source was in transition.  Changes are in-progress in the
source as it is released.

*/
//-------------------------------------------------------------------------

#include "ns.h"
#include "global.h"
#include "names_d.h"

BEGIN_DUKE_NS

void initactorflags_d()
{
	gs.weaponsandammosprites[0] = DukeRPGSpriteClass;
	gs.weaponsandammosprites[1] = DukeChaingunSpriteClass;
	gs.weaponsandammosprites[2] = DukeDevastatorAmmoClass;
	gs.weaponsandammosprites[3] = DukeRPGAmmoClass;
	gs.weaponsandammosprites[4] = DukeRPGAmmoClass;
	gs.weaponsandammosprites[5] = DukeJetpackClass;
	gs.weaponsandammosprites[6] = DukeShieldClass;
	gs.weaponsandammosprites[7] = DukeFirstAidClass;
	gs.weaponsandammosprites[8] = DukeSteroidsClass;
	gs.weaponsandammosprites[9] = DukeRPGAmmoClass;
	gs.weaponsandammosprites[10] = DukeRPGAmmoClass;
	gs.weaponsandammosprites[11] = DukeRPGSpriteClass;
	gs.weaponsandammosprites[12] = DukeRPGAmmoClass;
	gs.weaponsandammosprites[13] = DukeFreezeSpriteClass;
	gs.weaponsandammosprites[14] = DukeFreezeAmmoClass;
	gs.firstdebris = DTILE_SCRAP6;

	TILE_CROSSHAIR = DTILE_CROSSHAIR;

}


END_DUKE_NS
