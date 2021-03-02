/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUICardSectionView.h>

@class TLKStackView, SearchUILabel;

@interface SearchUICompactCardSectionView : SearchUICardSectionView {

	TLKStackView* _stackView;
	SearchUILabel* _titleLabel;
	SearchUILabel* _subtitleLabel;

}

@property (nonatomic,retain) TLKStackView * stackView;                   //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) SearchUILabel * titleLabel;                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) SearchUILabel * subtitleLabel;              //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
+(BOOL)supportsRecyclingForCardSection:(id)arg1 ;
-(void)setSubtitleLabel:(SearchUILabel *)arg1 ;
-(void)updateWithRowModel:(id)arg1 ;
-(TLKStackView *)stackView;
-(id)setupContentView;
-(void)setStackView:(TLKStackView *)arg1 ;
-(SearchUILabel *)titleLabel;
-(void)setTitleLabel:(SearchUILabel *)arg1 ;
-(SearchUILabel *)subtitleLabel;
-(id)richTextForSearchUIText:(id)arg1 withMaxLines:(unsigned long long)arg2 ;
@end
