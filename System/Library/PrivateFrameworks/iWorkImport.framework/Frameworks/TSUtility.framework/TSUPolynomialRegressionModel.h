/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUtility-Structs.h>
#import <TSUtility/TSURegressionModel.h>

@class NSMutableArray;

@interface TSUPolynomialRegressionModel : TSURegressionModel {

	double* mCoefficients;
	int mNumCoefficients;
	BOOL mAffine;
	double mIntercept;
	double mRSquared;
	int mNumSuperscriptRanges;
	NSMutableArray* mSuperscriptRangesArray;

}
-(void)dealloc;
-(double)rSquared;
-(double)coefficientAtIndex:(int)arg1 ;
-(double)estimateForX:(double*)arg1 ;
-(id)getEquationStringAndBuildSuperscriptRangesArray:(id)arg1 ;
-(int)numSuperscriptRanges;
-(NSRange)superscriptRangeAtIndex:(int)arg1 ;
-(id)initAffineWithMappings:(int)arg1 xs:(double*)arg2 ys:(double*)arg3 xOrder:(int)arg4 ;
-(int)regressionType;
-(int)numCoefficients;
-(id)initWithMappings:(int)arg1 xs:(double*)arg2 ys:(double*)arg3 xOrder:(int)arg4 makeAffine:(BOOL)arg5 desiredIntercept:(double)arg6 ;
-(double)estimateFor1DX:(double)arg1 ;
-(id)initNonAffineWithMappings:(int)arg1 xs:(double*)arg2 ys:(double*)arg3 xOrder:(int)arg4 desiredIntercept:(double)arg5 ;
@end

