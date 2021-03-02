/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface SBSwitcherScrollViewAttributes : NSObject <NSCopying, NSMutableCopying> {

	BOOL _scrollViewPagingEnabled;
	BOOL _interpolatesDuringSwipeToKill;
	double _decelerationRate;
	unsigned long long _scrollAxis;
	CGSize _contentSize;
	CGSize _interpageSpacingForPaging;
	CGPoint _pagingOrigin;

}

@property (assign,nonatomic) CGSize contentSize;                              //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,nonatomic) double decelerationRate;                         //@synthesize decelerationRate=_decelerationRate - In the implementation block
@property (assign,nonatomic) BOOL scrollViewPagingEnabled;                    //@synthesize scrollViewPagingEnabled=_scrollViewPagingEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long scrollAxis;                   //@synthesize scrollAxis=_scrollAxis - In the implementation block
@property (assign,nonatomic) CGSize interpageSpacingForPaging;                //@synthesize interpageSpacingForPaging=_interpageSpacingForPaging - In the implementation block
@property (assign,nonatomic) CGPoint pagingOrigin;                            //@synthesize pagingOrigin=_pagingOrigin - In the implementation block
@property (assign,nonatomic) BOOL interpolatesDuringSwipeToKill;              //@synthesize interpolatesDuringSwipeToKill=_interpolatesDuringSwipeToKill - In the implementation block
-(void)setContentSize:(CGSize)arg1 ;
-(double)decelerationRate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)contentSize;
-(void)setScrollAxis:(unsigned long long)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(CGPoint)pagingOrigin;
-(void)setPagingOrigin:(CGPoint)arg1 ;
-(id)_copyWithClass:(Class)arg1 ;
-(unsigned long long)scrollAxis;
-(void)setDecelerationRate:(double)arg1 ;
-(BOOL)scrollViewPagingEnabled;
-(CGSize)interpageSpacingForPaging;
-(BOOL)interpolatesDuringSwipeToKill;
-(void)setScrollViewPagingEnabled:(BOOL)arg1 ;
-(void)setInterpageSpacingForPaging:(CGSize)arg1 ;
-(void)setInterpolatesDuringSwipeToKill:(BOOL)arg1 ;
@end
