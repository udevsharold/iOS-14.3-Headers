/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <AvatarUI/AVTEngagementListCollectionViewLayout.h>

@class NSIndexPath, UICollectionViewUpdateItem, AVTUIEnvironment;

@interface AVTZIndexEngagementListCollectionViewLayout : AVTEngagementListCollectionViewLayout {

	NSIndexPath* _backIndexPath;
	NSIndexPath* _plusButtonIndexPath;
	UICollectionViewUpdateItem* _currentUpdateItem;
	double _minAlphaFactor;
	AVTUIEnvironment* _environment;

}

@property (nonatomic,retain) UICollectionViewUpdateItem * currentUpdateItem;              //@synthesize currentUpdateItem=_currentUpdateItem - In the implementation block
@property (assign,nonatomic) double minAlphaFactor;                                       //@synthesize minAlphaFactor=_minAlphaFactor - In the implementation block
@property (nonatomic,retain) AVTUIEnvironment * environment;                              //@synthesize environment=_environment - In the implementation block
@property (nonatomic,retain) NSIndexPath * backIndexPath;                                 //@synthesize backIndexPath=_backIndexPath - In the implementation block
@property (nonatomic,retain) NSIndexPath * plusButtonIndexPath;                           //@synthesize plusButtonIndexPath=_plusButtonIndexPath - In the implementation block
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(id)initWithEngagementLayout:(id)arg1 minAlphaFactor:(double)arg2 environment:(id)arg3 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(void)setPlusButtonIndexPath:(NSIndexPath *)arg1 ;
-(void)setBackIndexPath:(NSIndexPath *)arg1 ;
-(void)finalizeCollectionViewUpdates;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(UIEdgeInsets)engagementInsetsForCollectionViewBounds:(CGSize)arg1 ;
-(AVTUIEnvironment *)environment;
-(void)setEnvironment:(AVTUIEnvironment *)arg1 ;
-(void)prepareForCollectionViewUpdates:(id)arg1 ;
-(NSIndexPath *)backIndexPath;
-(NSIndexPath *)plusButtonIndexPath;
-(double)minAlphaFactor;
-(double)alphaForPadElementWithEngagement:(double)arg1 ;
-(long long)zIndexForElementWithAttributes:(id)arg1 ;
-(double)alphaForElementWithAttributes:(id)arg1 ;
-(void)setCurrentUpdateItem:(UICollectionViewUpdateItem *)arg1 ;
-(UICollectionViewUpdateItem *)currentUpdateItem;
-(void)setMinAlphaFactor:(double)arg1 ;
@end

