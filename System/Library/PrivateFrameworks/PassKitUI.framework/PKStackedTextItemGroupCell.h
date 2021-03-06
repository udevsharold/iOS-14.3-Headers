/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKTableViewCell.h>

@class PKStackedTextItemGroupView, PKStackedTextItemGroup;

@interface PKStackedTextItemGroupCell : PKTableViewCell {

	PKStackedTextItemGroupView* _groupView;
	long long _style;
	BOOL _animated;

}

@property (nonatomic,retain) PKStackedTextItemGroup * content; 
-(PKStackedTextItemGroup *)content;
-(void)setContent:(PKStackedTextItemGroup *)arg1 ;
-(void)layoutIfNeededAnimated:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(id)initWithGroupViewStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(CGRect)_separatorFrame;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setContent:(id)arg1 animated:(BOOL)arg2 ;
@end

