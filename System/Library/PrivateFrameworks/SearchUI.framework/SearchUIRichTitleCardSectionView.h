/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUI-Structs.h>
#import <SearchUI/SearchUICardSectionView.h>

@class TLKHeaderView;

@interface SearchUIRichTitleCardSectionView : SearchUICardSectionView

@property (nonatomic,retain) TLKHeaderView * contentView; 
+(int)defaultSeparatorStyleForCardSection:(id)arg1 ;
+(BOOL)supportsRecyclingForCardSection:(id)arg1 ;
+(id)dragSubtitleForCardSection:(id)arg1 ;
+(id)dragTitleForCardSection:(id)arg1 ;
-(void)updateWithRowModel:(id)arg1 ;
-(id)setupContentView;
-(void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(CGSize)arg2 forReason:(long long)arg3 ;
@end

