/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UICollectionView.h>

@class UICollectionViewLayout, UIRefreshControl, SKUIIndexBarControl;

@interface SKUICollectionView : UICollectionView {

	BOOL _delegateWantsWillLayoutSubviews;
	BOOL _externalShowsHorizontalScrollIndicator;
	BOOL _externalShowsVerticalScrollIndicator;
	double _overrideBoundsWidth;
	UICollectionViewLayout* _pendingCollectionViewLayout;
	UIRefreshControl* _refreshControl;
	SKUIIndexBarControl* _indexBarControl;

}

@property (nonatomic,retain) SKUIIndexBarControl * indexBarControl;              //@synthesize indexBarControl=_indexBarControl - In the implementation block
@property (nonatomic,retain) UIRefreshControl * refreshControl;                  //@synthesize refreshControl=_refreshControl - In the implementation block
@property (assign,nonatomic) double overrideBoundsWidth;                         //@synthesize overrideBoundsWidth=_overrideBoundsWidth - In the implementation block
-(CGRect)bounds;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)setCollectionViewLayout:(id)arg1 animated:(BOOL)arg2 ;
-(void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)layoutSubviews;
-(UIRefreshControl *)refreshControl;
-(void)setDelegate:(id)arg1 ;
-(void)setRefreshControl:(UIRefreshControl *)arg1 ;
-(id)collectionViewLayout;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(void)setShowsHorizontalScrollIndicator:(BOOL)arg1 ;
-(void)setShowsVerticalScrollIndicator:(BOOL)arg1 ;
-(void)setIndexBarControl:(SKUIIndexBarControl *)arg1 ;
-(SKUIIndexBarControl *)indexBarControl;
-(void)setOverrideBoundsWidth:(double)arg1 ;
-(void)_updateIndexBarControlFrame;
-(void)_updateShowsScrollIndicators;
-(double)overrideBoundsWidth;
@end

