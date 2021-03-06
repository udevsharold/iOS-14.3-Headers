/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUI-Structs.h>
#import <SearchUI/SearchUICardSectionView.h>

@class TLKGridRowView;

@interface SearchUITableRowCardView : SearchUICardSectionView

@property (nonatomic,retain) TLKGridRowView * contentView; 
+(BOOL)supportsRecyclingForCardSection:(id)arg1 ;
+(UIEdgeInsets)defaultLayoutMargins;
+(double)largestImageSizeForSection:(id)arg1 ;
+(BOOL)hasOnlyImages:(id)arg1 ;
+(BOOL)isAHeader:(id)arg1 ;
-(void)updateWithRowModel:(id)arg1 ;
-(id)setupContentView;
-(id)leadingTextView;
-(UIEdgeInsets)verticalBaselineInsetsForHeader:(BOOL)arg1 isCompactTable:(BOOL)arg2 ;
-(UIEdgeInsets)verticalBaselineInsetsForRowsWithCompactTable:(BOOL)arg1 ;
@end

