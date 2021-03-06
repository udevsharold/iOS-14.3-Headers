/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVCollectionView.h>

@class _TVShelfViewLayout;

@interface _TVShelfView : _TVCollectionView {

	_TVShelfViewLayout* _shelfFlowLayout;

}

@property (nonatomic,retain) _TVShelfViewLayout * shelfFlowLayout;              //@synthesize shelfFlowLayout=_shelfFlowLayout - In the implementation block
-(CGPoint)_contentOffsetForNewFrame:(CGRect)arg1 oldFrame:(CGRect)arg2 newContentSize:(CGSize)arg3 andOldContentSize:(CGSize)arg4 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 shelfViewLayout:(id)arg2 ;
-(_TVShelfViewLayout *)shelfFlowLayout;
-(UIEdgeInsets)_selectionMarginsForCell:(id)arg1 ;
-(UIEdgeInsets)selectionMarginsForCellAtIndexPath:(id)arg1 ;
-(CGRect)tv_augmentedSelectionFrameForFrame:(CGRect)arg1 ;
-(CGSize)tv_sizeThatFits:(CGSize)arg1 withContentInset:(UIEdgeInsets)arg2 ;
-(void)_updateLayoutForFocusedView:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)updateLayoutForFocusedView:(id)arg1 ;
-(void)setShelfFlowLayout:(_TVShelfViewLayout *)arg1 ;
@end

