 /*==========================================================================
                SeqAn - The Library for Sequence Analysis
                          http://www.seqan.de 
 ============================================================================
  Copyright (C) 2007

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 3 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
  Lesser General Public License for more details.

 ==========================================================================*/

#ifndef SEQAN_HEADER_STATISTICAL_INDEX_GENERATED_FORWARDS_H 
#define SEQAN_HEADER_STATISTICAL_INDEX_GENERATED_FORWARDS_H 

//////////////////////////////////////////////////////////////////////////////
// NOTE: This file is automatically generated by build_forwards.py
//       Do not edit this file manually!
//////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////
// CLASSES
//////////////////////////////////////////////////////////////////////////////

namespace seqan {

//____________________________________________________________________________
// MarkovModel

template <typename TAlphabet, typename TFloat , typename TSpec > class MarkovModel;       	// "projects/library/seqan/statistical_index/statistical_index_markov_model.h"(98)

} //namespace seqan


//////////////////////////////////////////////////////////////////////////////
// TYPEDEFS
//////////////////////////////////////////////////////////////////////////////

namespace seqan {

//____________________________________________________________________________
// TDnaAlphabet

typedef Dna TDnaAlphabet;       	// "projects/library/seqan/statistical_index/statistical_index_statistics.h"(308)

//____________________________________________________________________________
// TDnaSequence

typedef String<TDnaAlphabet> TDnaSequence;       	// "projects/library/seqan/statistical_index/statistical_index_statistics.h"(309)

} //namespace seqan


//////////////////////////////////////////////////////////////////////////////
// FUNCTIONS
//////////////////////////////////////////////////////////////////////////////

namespace seqan {

//____________________________________________________________________________
// _addReveseComplements

template <typename TStringSet> void _addReveseComplements(TStringSet& needle);       	// "projects/library/seqan/statistical_index/statistical_index_statistics.h"(264)

//____________________________________________________________________________
// _computeExpectation

template <typename TAlphabet, typename TFloat, typename TSpec, typename TStringSet> TFloat _computeExpectation(MarkovModel<TAlphabet, TFloat, TSpec> & mm, TStringSet & W, unsigned int n);       	// "projects/library/seqan/statistical_index/statistical_index_statistics.h"(293)

//____________________________________________________________________________
// _computeInverseMatrix

template <typename TAlphabet, typename TSpec1> String<TAlphabet> _computeInverseMatrix(String<TAlphabet, TSpec1>& matrix, unsigned int n);       	// "projects/library/seqan/statistical_index/statistical_index_markov_model.h"(589)

//____________________________________________________________________________
// _computeVariance

template <typename TFloat, typename TStringSet, typename TAlphabet, typename TSpec> TFloat _computeVariance( TStringSet& W, TStringSet& X, MarkovModel<TAlphabet, TFloat, TSpec> & M, TFloat &E);       	// "projects/library/seqan/statistical_index/statistical_index_statistics.h"(94)

//____________________________________________________________________________
// _getMatrixColumnFromString

unsigned int _getMatrixColumnFromString(unsigned int stringPosition, unsigned int ncol);       	// "projects/library/seqan/statistical_index/statistical_index_markov_model.h"(444)

//____________________________________________________________________________
// _getMatrixRowFromString

unsigned int _getMatrixRowFromString(unsigned int stringPosition, unsigned int ncol);       	// "projects/library/seqan/statistical_index/statistical_index_markov_model.h"(427)

//____________________________________________________________________________
// _getStringIndexFromMatrix

unsigned int _getStringIndexFromMatrix(unsigned int ri, unsigned int ci, unsigned int ncol);       	// "projects/library/seqan/statistical_index/statistical_index_markov_model.h"(464)

//____________________________________________________________________________
// _lubksb

template <typename TAlphabet> void _lubksb(String<TAlphabet> &a, int n, String<TAlphabet> &indx, String<TAlphabet> &b);       	// "projects/library/seqan/statistical_index/statistical_index_markov_model.h"(626)

//____________________________________________________________________________
// _ludcmp

template <typename TAlphabet> String<TAlphabet> _ludcmp(String<TAlphabet> &result, int n);       	// "projects/library/seqan/statistical_index/statistical_index_markov_model.h"(658)

//____________________________________________________________________________
// _matricialDifference

template <typename TAlphabet, typename TSpec1, typename TSpec2> String<TAlphabet> _matricialDifference(String<TAlphabet, TSpec1>& matrix1, String<TAlphabet, TSpec2>& matrix2, unsigned int ncol);       	// "projects/library/seqan/statistical_index/statistical_index_markov_model.h"(557)

//____________________________________________________________________________
// _matricialProduct

template <typename TAlphabet, typename TSpec1, typename TSpec2> String<TAlphabet> _matricialProduct(String<TAlphabet, TSpec1>& matrix1, String<TAlphabet, TSpec2>& matrix2, unsigned int n);       	// "projects/library/seqan/statistical_index/statistical_index_markov_model.h"(486)

//____________________________________________________________________________
// _matricialSum

template <typename TAlphabet, typename TSpec1, typename TSpec2> String<TAlphabet> _matricialSum(String<TAlphabet, TSpec1>& matrix1, String<TAlphabet, TSpec2>& matrix2, unsigned int ncol);       	// "projects/library/seqan/statistical_index/statistical_index_markov_model.h"(522)

//____________________________________________________________________________
// _numOccurrences

template <typename TAlgorithm, typename TFloat, typename TAlphabet, typename TStringSet> void _numOccurrences(TFloat &nW, String<TAlphabet>& haystack, TStringSet& needle);       	// "projects/library/seqan/statistical_index/statistical_index_statistics.h"(246)

//____________________________________________________________________________
// _overlapExpectation

template <typename TFloat, typename TStringSet, typename TAlphabet, typename TSpec> TFloat _overlapExpectation(TStringSet& W, MarkovModel<TAlphabet, TFloat, TSpec> &M, unsigned int n);       	// "projects/library/seqan/statistical_index/statistical_index_statistics.h"(199)

//____________________________________________________________________________
// _zscore

template <typename TAlgorithm, typename TFloat, typename TStringSet, typename TAlphabet, typename TSpec> TFloat _zscore( TStringSet& W, TStringSet& X, MarkovModel<TAlphabet, TFloat, TSpec> & M);       	// "projects/library/seqan/statistical_index/statistical_index_statistics.h"(50)

//____________________________________________________________________________
// buildMarkovModel

template <typename TAlphabet, typename TFloat, typename TSpec, typename TStringSet> void buildMarkovModel(MarkovModel<TAlphabet, TFloat, TSpec> & mm, TStringSet & strings);       	// "projects/library/seqan/statistical_index/statistical_index_markov_model.h"(834)

//____________________________________________________________________________
// emittedProbability

template <typename TAlphabet, typename TFloat, typename TSpec, typename TStringSet> TFloat emittedProbability(MarkovModel<TAlphabet, TFloat, TSpec> & mm, TStringSet &string);       	// "projects/library/seqan/statistical_index/statistical_index_markov_model.h"(864)
template <typename TAlphabet, typename TFloat, typename TSpec> TFloat emittedProbability(MarkovModel<TAlphabet, TFloat, TSpec> & mm, String<TAlphabet> &string);       	// "projects/library/seqan/statistical_index/statistical_index_markov_model.h"(872)

//____________________________________________________________________________
// expectation

template <typename TAlphabet, typename TFloat, typename TSpec, typename TStringSet> TFloat expectation(TStringSet & W, TStringSet & X, MarkovModel<TAlphabet, TFloat, TSpec> & M);       	// "projects/library/seqan/statistical_index/statistical_index_statistics.h"(458)

//____________________________________________________________________________
// read

template <typename TAlphabet, typename TFloat, typename TSpec> void read(FILE *file, MarkovModel<TAlphabet, TFloat, TSpec> & mm );       	// "projects/library/seqan/statistical_index/statistical_index_markov_model.h"(892)

//____________________________________________________________________________
// setMarkovModel

template <typename TAlphabet, typename TFloat, typename TSpec> void setMarkovModel(MarkovModel<TAlphabet, TFloat, TSpec> & mm, String<TFloat> &iTransition);       	// "projects/library/seqan/statistical_index/statistical_index_markov_model.h"(845)
template <typename TAlphabet, typename TFloat, typename TSpec> void setMarkovModel(MarkovModel<TAlphabet, TFloat, TSpec> & mm, String<TFloat> &iTransition, String<TFloat> &iStationaryDistribution);       	// "projects/library/seqan/statistical_index/statistical_index_markov_model.h"(855)

//____________________________________________________________________________
// variance

template <typename TFloat, typename TStringSet, typename TAlphabet, typename TSpec> TFloat variance(TStringSet W, TStringSet& X, MarkovModel<TAlphabet, TFloat, TSpec> & M);       	// "projects/library/seqan/statistical_index/statistical_index_statistics.h"(399)
template <typename TFloat, typename TSpec> TFloat variance(StringSet<TDnaSequence> W, StringSet<TDnaSequence> &X, MarkovModel<Dna, TFloat, TSpec> & M);       	// "projects/library/seqan/statistical_index/statistical_index_statistics.h"(407)

//____________________________________________________________________________
// write

template <typename TAlphabet, typename TFloat, typename TSpec> void write(FILE *file, MarkovModel<TAlphabet, TFloat, TSpec> & mm );       	// "projects/library/seqan/statistical_index/statistical_index_markov_model.h"(882)

//____________________________________________________________________________
// zscore

template <typename TAlgorithm, typename TFloat, typename TStringSet, typename TAlphabet, typename TSpec> TFloat zscore(TStringSet W, TStringSet &X, MarkovModel<TAlphabet, TFloat, TSpec> &M);       	// "projects/library/seqan/statistical_index/statistical_index_statistics.h"(328)
template <typename TAlgorithm, typename TFloat, typename TSpec> TFloat zscore(StringSet<TDnaSequence> W, StringSet<TDnaSequence> &X, MarkovModel<Dna, TFloat, TSpec> &M);       	// "projects/library/seqan/statistical_index/statistical_index_statistics.h"(334)

} //namespace seqan

#endif

