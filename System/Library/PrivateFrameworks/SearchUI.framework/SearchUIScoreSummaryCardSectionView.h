/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUI-Structs.h>
#import <SearchUI/SearchUICardSectionView.h>
#import <libobjc.A.dylib/NUIContainerViewDelegate.h>

@class TLKSplitHeaderView, NSString;

@interface SearchUIScoreSummaryCardSectionView : SearchUICardSectionView <NUIContainerViewDelegate> {

	TLKSplitHeaderView* _splitHeaderView;

}

@property (nonatomic,retain) TLKSplitHeaderView * splitHeaderView;              //@synthesize splitHeaderView=_splitHeaderView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)defaultSeparatorStyleForCardSection:(id)arg1 ;
+(BOOL)supportsRecyclingForCardSection:(id)arg1 ;
+(id)titleForScoreBoard:(id)arg1 forDisplay:(BOOL)arg2 ;
+(id)dragTitleForCardSection:(id)arg1 ;
-(void)updateChevronVisible:(BOOL)arg1 leaveSpaceForChevron:(BOOL)arg2 ;
-(void)updateWithRowModel:(id)arg1 ;
-(id)setupContentView;
-(CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(CGSize)arg2 forArrangedSubview:(id)arg3 ;
-(void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(CGSize)arg2 forReason:(long long)arg3 ;
-(void)setSplitHeaderView:(TLKSplitHeaderView *)arg1 ;
-(TLKSplitHeaderView *)splitHeaderView;
@end

