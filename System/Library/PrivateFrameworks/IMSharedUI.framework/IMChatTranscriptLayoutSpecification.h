/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMSharedUI/IMSharedUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface IMChatTranscriptLayoutSpecification : NSObject <NSCopying> {

	double _maximumBubbleWidth;
	double _topMargin;
	double _bottomMargin;
	double _leadingMargin;
	double _trailingMargin;
	double _zeroVerticalItemSpacing;
	double _smallVerticalItemSpacing;
	double _mediumVerticalItemSpacing;
	double _largeVerticalItemSpacing;
	CGSize _layoutBoundsSize;

}

@property (assign,nonatomic) CGSize layoutBoundsSize;                       //@synthesize layoutBoundsSize=_layoutBoundsSize - In the implementation block
@property (assign,nonatomic) double maximumBubbleWidth;                     //@synthesize maximumBubbleWidth=_maximumBubbleWidth - In the implementation block
@property (assign,nonatomic) double topMargin;                              //@synthesize topMargin=_topMargin - In the implementation block
@property (assign,nonatomic) double bottomMargin;                           //@synthesize bottomMargin=_bottomMargin - In the implementation block
@property (assign,nonatomic) double leadingMargin;                          //@synthesize leadingMargin=_leadingMargin - In the implementation block
@property (assign,nonatomic) double trailingMargin;                         //@synthesize trailingMargin=_trailingMargin - In the implementation block
@property (assign,nonatomic) double zeroVerticalItemSpacing;                //@synthesize zeroVerticalItemSpacing=_zeroVerticalItemSpacing - In the implementation block
@property (assign,nonatomic) double smallVerticalItemSpacing;               //@synthesize smallVerticalItemSpacing=_smallVerticalItemSpacing - In the implementation block
@property (assign,nonatomic) double mediumVerticalItemSpacing;              //@synthesize mediumVerticalItemSpacing=_mediumVerticalItemSpacing - In the implementation block
@property (assign,nonatomic) double largeVerticalItemSpacing;               //@synthesize largeVerticalItemSpacing=_largeVerticalItemSpacing - In the implementation block
-(double)leadingMargin;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)trailingMargin;
-(void)setLeadingMargin:(double)arg1 ;
-(void)setTrailingMargin:(double)arg1 ;
-(double)bottomMargin;
-(void)setTopMargin:(double)arg1 ;
-(void)setBottomMargin:(double)arg1 ;
-(unsigned long long)hash;
-(double)topMargin;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(CGSize)layoutBoundsSize;
-(void)setLayoutBoundsSize:(CGSize)arg1 ;
-(double)maximumBubbleWidth;
-(void)setMaximumBubbleWidth:(double)arg1 ;
-(double)zeroVerticalItemSpacing;
-(void)setZeroVerticalItemSpacing:(double)arg1 ;
-(double)smallVerticalItemSpacing;
-(void)setSmallVerticalItemSpacing:(double)arg1 ;
-(double)mediumVerticalItemSpacing;
-(void)setMediumVerticalItemSpacing:(double)arg1 ;
-(double)largeVerticalItemSpacing;
-(void)setLargeVerticalItemSpacing:(double)arg1 ;
@end
