// -*- mode: c++; indent-tabs-mode: nil; -*-
//
// Manta
// Copyright (c) 2013 Illumina, Inc.
//
// This software is provided under the terms and conditions of the
// Illumina Open Source Software License 1.
//
// You should have received a copy of the Illumina Open Source
// Software License 1 along with this program. If not, see
// <https://github.com/downloads/sequencing/licenses/>.
//

#include "alignment/Alignment.hh"

#include <iostream>


std::ostream&
operator<<(std::ostream& os, const Alignment& align)
{
    os << "start: " << align.alignStart << " cigar: " << apath_to_cigar(align.apath);
    return os;
}


