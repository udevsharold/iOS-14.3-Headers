/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>
#import <libobjc.A.dylib/AVTCollectionViewLayout.h>

@class AVTEngagementLayout, NSValue;

@interface AVTEngagementListCollectionViewLayout : UICollectionViewLayout <AVTCollectionViewLayout> {

	AVTEngagementLayout* _engagementLayout;
	NSValue* _ignoredProposedContentOffset;
	NSValue* _targetContentOffset;

}

@property (nonatomic,retain) NSValue * targetContentOffset;                         //@synthesize targetContentOffset=_targetContentOffset - In the implementation block
@property (nonatomic,retain) NSValue * ignoredProposedContentOffset;                //@synthesize ignoredProposedContentOffset=_ignoredProposedContentOffset - In the implementation block
@property (nonatomic,readonly) AVTEngagementLayout * engagementLayout;              //@synthesize engagementLayout=_engagementLayout - In the implementation block
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 ;
-(BOOL)flipsHorizontallyInOppositeLayoutDirection;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(AVTEngagementLayout *)engagementLayout;
-(void)clearTargetContentOffsetForAnimations;
-(void)setTargetContentOffsetForAnimations:(CGPoint)arg1 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(void)invalidateLayout;
-(id)initWithEngagementLayout:(id)arg1 ;
-(NSValue *)targetContentOffset;
-(void)setTargetContentOffset:(NSValue *)arg1 ;
-(CGPoint)centerForCenteringElementAtIndex:(long long)arg1 visibleBoundsSize:(CGSize)arg2 proposedOrigin:(CGPoint)arg3 ;
-(CGRect)frameForElementAtIndex:(long long)arg1 visibleBounds:(CGRect)arg2 ;
-(id)indexesForElementsInRect:(CGRect)arg1 visibleBounds:(CGRect)arg2 numberOfItems:(long long)arg3 ;
-(void)setIgnoredProposedContentOffset:(NSValue *)arg1 ;
-(UIEdgeInsets)engagementInsetsForCollectionViewBounds:(CGSize)arg1 ;
-(CGSize)contentSizeForVisibleBounds:(CGRect)arg1 numberOfItems:(long long)arg2 ;
-(NSValue *)ignoredProposedContentOffset;
@end

