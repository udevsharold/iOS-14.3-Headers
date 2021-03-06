/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUICardSectionView.h>
#import <libobjc.A.dylib/TLKDescriptionViewDelegate.h>

@class TLKDescriptionView, NSString;

@interface SearchUIDescriptionCardSectionView : SearchUICardSectionView <TLKDescriptionViewDelegate> {

	BOOL _expanded;

}

@property (nonatomic,retain) TLKDescriptionView * contentView; 
@property (assign,nonatomic) BOOL expanded;                                 //@synthesize expanded=_expanded - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsRecyclingForCardSection:(id)arg1 ;
+(BOOL)supportsCustomUserReportRequestAfforance;
+(id)dragSubtitleForCardSection:(id)arg1 ;
+(id)dragTitleForCardSection:(id)arg1 ;
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)expanded;
-(void)updateWithRowModel:(id)arg1 ;
-(id)setupContentView;
-(void)didPressMoreButton;
-(void)didPressFootnoteButton;
-(void)didPressTrailingFootnoteButton;
@end

