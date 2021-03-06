/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUICardSectionView.h>
#import <libobjc.A.dylib/TLKSelectableGridViewDelegate.h>

@class TLKSelectableGridView, NSString;

@interface SearchUISelectableGridCardSectionView : SearchUICardSectionView <TLKSelectableGridViewDelegate>

@property (nonatomic,retain) TLKSelectableGridView * contentView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsRecyclingForCardSection:(id)arg1 ;
-(void)updateWithRowModel:(id)arg1 ;
-(id)setupContentView;
-(void)selectableGridView:(id)arg1 didChangeSelectedIndex:(long long)arg2 ;
-(id)convertSFTitleSubtitleData:(id)arg1 ;
@end

