/*
 * SPDX-License-Identifier: GPL-3.0-only
 * MuseScore-CLA-applies
 *
 * MuseScore
 * Music Composition & Notation
 *
 * Copyright (C) 2023 MuseScore BVBA and others
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 3 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */
#ifndef MU_ENGRAVING_TLAYOUT_DEV_H
#define MU_ENGRAVING_TLAYOUT_DEV_H

#include "layoutcontext.h"

#include "../../dom/accidental.h"
#include "../../dom/actionicon.h"
#include "../../dom/ambitus.h"
#include "../../dom/arpeggio.h"
#include "../../dom/articulation.h"

#include "../../dom/barline.h"
#include "../../dom/bend.h"
#include "../../dom/box.h"
#include "../../dom/bracket.h"
#include "../../dom/breath.h"

#include "../../dom/chordline.h"
#include "../../dom/clef.h"
#include "../../dom/capo.h"

#include "../../dom/deadslapped.h"
#include "../../dom/dynamic.h"

#include "../../dom/expression.h"

#include "../../dom/fermata.h"
#include "../../dom/figuredbass.h"
#include "../../dom/fingering.h"
#include "../../dom/fret.h"

#include "../../dom/harppedaldiagram.h"
#include "../../dom/harmony.h"
#include "../../dom/hook.h"

#include "../../dom/image.h"
#include "../../dom/instrchange.h"
#include "../../dom/instrumentname.h"

#include "../../dom/jump.h"

#include "../../dom/keysig.h"

#include "../../dom/layoutbreak.h"

#include "../../dom/marker.h"
#include "../../dom/measurebase.h"
#include "../../dom/measurenumber.h"
#include "../../dom/measurenumberbase.h"
#include "../../dom/measurerepeat.h"
#include "../../dom/mmrest.h"
#include "../../dom/mmrestrange.h"

#include "../../dom/note.h"
#include "../../dom/notedot.h"

#include "../../dom/playtechannotation.h"

#include "../../dom/rehearsalmark.h"
#include "../../dom/rest.h"

#include "../../dom/staffstate.h"
#include "../../dom/stafftext.h"
#include "../../dom/stafftypechange.h"
#include "../../dom/stem.h"
#include "../../dom/stemslash.h"

#include "../../dom/textbase.h"

#include "../../dom/ornament.h"

namespace mu::engraving {
class EngravingItem;

class BagpipeEmbellishment;
class Beam;

class Chord;

class Glissando;
class GlissandoSegment;
class GraceNotesGroup;
class GradualTempoChangeSegment;
class GradualTempoChange;

class HairpinSegment;
class Hairpin;
class HarmonicMarkSegment;

class LedgerLine;
class LetRing;
class LetRingSegment;
class LineSegment;
class Lyrics;
class LyricsLine;
class LyricsLineSegment;

class Ottava;
class OttavaSegment;

class PalmMute;
class PalmMuteSegment;
class Pedal;
class PedalSegment;
class PickScrapeSegment;

class RasgueadoSegment;

class ShadowNote;
class SLine;
class Slur;
class Spacer;
class SpannerSegment;
class StaffLines;
class Sticking;
class StretchedBend;

class BSymbol;
class Symbol;
class FSymbol;

class SystemDivider;
class SystemText;

class TabDurationSymbol;
class TempoText;
class Text;
class TextLine;
class TextLineSegment;
class TextLineBase;
class TextLineBaseSegment;
class Tie;
class TimeSig;
class Tremolo;
class TremoloBar;
class TrillSegment;
class TripletFeel;
class Trill;
class Tuplet;

class VibratoSegment;
class Vibrato;
class Volta;
class VoltaSegment;

class WhammyBarSegment;
}

namespace mu::engraving::rendering::dev {
class TLayout
{
public:

    static void layoutItem(EngravingItem* item, LayoutContext& ctx);  // factory

    static void layout(const Accidental* item, Accidental::LayoutData* ldata, const LayoutConfiguration& conf);
    static void layout(const ActionIcon* item, ActionIcon::LayoutData* ldata);
    static void layout(const Ambitus* item, Ambitus::LayoutData* ldata, const LayoutContext& ctx);
    static void layout(const Arpeggio* item, Arpeggio::LayoutData* ldata, const LayoutConfiguration& conf,
                       bool includeCrossStaffHeight = false);
    static void layout(const Articulation* item, Articulation::LayoutData* ldata);

    static void layout(const BarLine* item, BarLine::LayoutData* ldata, const LayoutContext& ctx);
    static void layout2(BarLine* item, LayoutContext& ctx);
    static void layout(Beam* item, LayoutContext& ctx);
    static void layout1(Beam* item, LayoutContext& ctx);
    static void layout(const Bend* item, Bend::LayoutData* ldata);

    static void layout(const Box* item, Box::LayoutData* ldata, const LayoutContext& ctx); // factory
    static void layoutBox(const Box* item, Box::LayoutData* ldata, const LayoutContext& ctx); // base class
    static void layout(const HBox* item, HBox::LayoutData* ldata, const LayoutContext& ctx);
    static void layout2(HBox* item, LayoutContext& ctx);
    static void layout(const VBox* item, VBox::LayoutData* ldata, const LayoutContext& ctx);
    static void layout(const FBox* item, FBox::LayoutData* ldata, const LayoutContext& ctx);
    static void layout(const TBox* item, FBox::LayoutData* ldata, const LayoutContext& ctx);

    static void layout(const Bracket* item, Bracket::LayoutData* ldata, const LayoutConfiguration& conf);
    static void layout(const Breath* item, Breath::LayoutData* ldata, const LayoutConfiguration& conf);

    static void layout(Chord* item, LayoutContext& ctx);
    static void layout(const ChordLine* item, ChordLine::LayoutData* ldata, const LayoutConfiguration& conf);
    static void layout(const Clef* item, Clef::LayoutData* ldata);
    static void layout(const Capo* item, Capo::LayoutData* ldata, const LayoutContext& ctx);

    static void layout(const DeadSlapped* item, DeadSlapped::LayoutData* ldata);
    static void layout(const Dynamic* item, Dynamic::LayoutData* ldata, const LayoutConfiguration& conf);

    static void layout(const Expression* item, Expression::LayoutData* ldata);

    static void layout(const Fermata* item, Fermata::LayoutData* ldata, const LayoutConfiguration& conf);
    static void layout(const FiguredBass* item, FiguredBass::LayoutData* ldata, const LayoutContext& ctx);
    static void layout(const Fingering* item, Fingering::LayoutData* ldata);
    static void layout(const FretDiagram* item, FretDiagram::LayoutData* ldata, const LayoutContext& ctx);

    static void layout(Glissando* item, LayoutContext& ctx);
    static void layout(GlissandoSegment* item, LayoutContext& ctx);
    static void layout(GraceNotesGroup* item, LayoutContext& ctx);
    static void layout(GradualTempoChangeSegment* item, LayoutContext& ctx);
    static void layout(GradualTempoChange* item, LayoutContext& ctx);

    static void layout(HairpinSegment* item, LayoutContext& ctx);
    static void layout(Hairpin* item, LayoutContext& ctx);
    static void layout(const HarpPedalDiagram* item, HarpPedalDiagram::LayoutData* ldata);
    static void layout(HarmonicMarkSegment* item, LayoutContext& ctx);
    static void layout(const Harmony* item, Harmony::LayoutData* ldata, LayoutContext& ctx);
    static void layout(const Hook* item, Hook::LayoutData* ldata);

    static void layout(const Image* item, Image::LayoutData* ldata);
    static void layout(const InstrumentChange* item, InstrumentChange::LayoutData* ldata);
    static void layout(const InstrumentName* item, InstrumentName::LayoutData* ldata);

    static void layout(const Jump* item, Jump::LayoutData* ldata);

    static void layout(const KeySig* item, KeySig::LayoutData* ldata, const LayoutConfiguration& conf);

    static void layout(const LayoutBreak* item, LayoutBreak::LayoutData* ldata);
    static void layout(LedgerLine* item, LayoutContext& ctx);
    static void layout(LetRing* item, LayoutContext& ctx);
    static void layout(LetRingSegment* item, LayoutContext& ctx);
    static void layout(LineSegment* item, LayoutContext& ctx);  // factory
    static void layout(Lyrics* item, LayoutContext& ctx);
    static void layout(LyricsLine* item, LayoutContext& ctx);
    static void layout(LyricsLineSegment* item, LayoutContext& ctx);

    static void layout(const Marker* item, Marker::LayoutData* ldata);
    static void layout(MeasureBase* item, LayoutContext& ctx); // factory
    static void layoutMeasureBase(const MeasureBase* item, MeasureBase::LayoutData* ldata, const LayoutContext& ctx); // base class
    static void layout(const MeasureNumber* item, MeasureNumber::LayoutData* ldata);
    static void layoutMeasureNumberBase(const MeasureNumberBase* item, MeasureNumberBase::LayoutData* ldata); // base class
    static void layout(const MeasureRepeat* item, MeasureRepeat::LayoutData* ldata, const LayoutContext& ctx);
    static void layoutMMRest(const MMRest* item, MMRest::LayoutData* ldata, const LayoutContext& ctx);
    static void layoutMMRestRange(const MMRestRange* item, MMRestRange::LayoutData* ldata);

    static void layoutNote(const Note* item, Note::LayoutData* ldata);
    static void layoutNoteDot(const NoteDot* item, NoteDot::LayoutData* ldata);

    static void layout(const Ornament* item, Ornament::LayoutData* ldata, const LayoutConfiguration& conf);
    static void layoutOrnamentCueNote(Ornament* item, LayoutContext& ctx);

    static void layout(Ottava* item, LayoutContext& ctx);
    static void layout(OttavaSegment* item, LayoutContext& ctx);

    static void layout(PalmMute* item, LayoutContext& ctx);
    static void layout(PalmMuteSegment* item, LayoutContext& ctx);
    static void layout(Pedal* item, LayoutContext& ctx);
    static void layout(PedalSegment* item, LayoutContext& ctx);
    static void layout(PickScrapeSegment* item, LayoutContext& ctx);
    static void layoutPlayTechAnnotation(const PlayTechAnnotation* item, PlayTechAnnotation::LayoutData* ldata);

    static void layout(RasgueadoSegment* item, LayoutContext& ctx);
    static void layoutRehearsalMark(const RehearsalMark* item, RehearsalMark::LayoutData* ldata);
    static void layoutRest(const Rest* item, Rest::LayoutData* ldata, const LayoutContext& ctx);

    static void layout(ShadowNote* item, LayoutContext& ctx);
    static void layoutLine(SLine* item, LayoutContext& ctx); // base class
    static void layout(Slur* item, LayoutContext& ctx);
    static void layout(Spacer* item, LayoutContext& ctx);
    static void layout(Spanner* item, LayoutContext& ctx);
    static void layout(StaffLines* item, LayoutContext& ctx);
    static void layoutForWidth(StaffLines* item, double w, LayoutContext& ctx);
    static void layoutStaffState(const StaffState* item, StaffState::LayoutData* ldata);
    static void layoutStaffText(const StaffText* item, StaffText::LayoutData* ldata);
    static void layoutStaffTypeChange(const StaffTypeChange* item, StaffTypeChange::LayoutData* ldata, const LayoutConfiguration& conf);
    static void layoutStem(const Stem* item, Stem::LayoutData* ldata, const LayoutConfiguration& conf);
    static void layoutStemSlash(const StemSlash* item, StemSlash::LayoutData* ldata, const LayoutConfiguration& conf);
    static void layout(Sticking* item, LayoutContext& ctx);
    static void layout(StretchedBend* item, LayoutContext& ctx);
    static void layoutStretched(StretchedBend* item, LayoutContext& ctx);

    static void layoutSymbol(Symbol* item, LayoutContext& ctx);
    static void layout(FSymbol* item, LayoutContext& ctx);

    static void layout(SystemDivider* item, LayoutContext& ctx);
    static void layout(SystemText* item, LayoutContext& ctx);

    static void layout(TabDurationSymbol* item, LayoutContext& ctx);
    static void layout(TempoText* item, LayoutContext& ctx);

    static void layout(TextBase* item, LayoutContext& ctx);                 // factory
    static void layoutTextBase(const TextBase* item, TextBase::LayoutData* data); // base class
    static void layoutTextBase(TextBase* item, LayoutContext& ctx);  // base class
    static void layout1TextBase(TextBase* item, const LayoutContext& ctx);  // base class
    static void layout1TextBase(const TextBase* item, TextBase::LayoutData* data);

    static void layout(Text* item, LayoutContext& ctx);

    static void layout(TextLine* item, LayoutContext& ctx);
    static void layout(TextLineSegment* item, LayoutContext& ctx);
    static void layoutTextLineBase(TextLineBase* item, LayoutContext& ctx);
    static void layoutTextLineBaseSegment(TextLineBaseSegment* item, LayoutContext& ctx); // base class
    static void layout(Tie* item, LayoutContext& ctx);
    static void layout(TimeSig* item, LayoutContext& ctx);
    static void layout(Tremolo* item, LayoutContext& ctx);
    static void layout(TremoloBar* item, LayoutContext& ctx);
    static void layout(Trill* item, LayoutContext& ctx);
    static void layout(TrillSegment* item, LayoutContext& ctx);
    static void layout(TripletFeel* item, LayoutContext& ctx);
    static void layout(Tuplet* item, LayoutContext& ctx);

    static void layout(Vibrato* item, LayoutContext& ctx);
    static void layout(VibratoSegment* item, LayoutContext& ctx);
    static void layout(Volta* item, LayoutContext& ctx);
    static void layout(VoltaSegment* item, LayoutContext& ctx);

    static void layout(WhammyBarSegment* item, LayoutContext& ctx);

    static RectF layoutRect(const BarLine* item, LayoutContext& ctx);

    // layoutSystem;
    static SpannerSegment* layoutSystem(Spanner* item, System* system, LayoutContext& ctx); // factory
    static SpannerSegment* layoutSystem(LyricsLine* line, System* system, LayoutContext& ctx);
    static SpannerSegment* layoutSystem(Volta* line, System* system, LayoutContext& ctx);
    static SpannerSegment* layoutSystem(Slur* line, System* system, LayoutContext& ctx);
    static void layoutSystemsDone(Spanner* item);

private:

    friend class SlurTieLayout;

    static void layoutFiguredBassItem(const FiguredBassItem* item, FiguredBassItem::LayoutData* ldata, const LayoutContext& ctx);

    static SpannerSegment* layoutSystemSLine(SLine* line, System* system, LayoutContext& ctx);
    static SpannerSegment* getNextLayoutSystemSegment(Spanner* spanner, System* system,
                                                      std::function<SpannerSegment* (System* parent)> createSegment);
};
}

#endif // MU_ENGRAVING_TLAYOUT_DEV_H
