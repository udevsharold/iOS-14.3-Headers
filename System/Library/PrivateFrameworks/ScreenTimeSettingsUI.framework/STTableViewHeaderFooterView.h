/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewHeaderFooterView.h>

@class UILayoutGuide, NSArray;

@interface STTableViewHeaderFooterView : UITableViewHeaderFooterView {

	UILayoutGuide* _contentLayoutGuide;
	NSArray* _rtlContentLayoutGuideConstraints;

}

@property (nonatomic,copy) NSArray * rtlContentLayoutGuideConstraints;              //@synthesize rtlContentLayoutGuideConstraints=_rtlContentLayoutGuideConstraints - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * contentLayoutGuide;                  //@synthesize contentLayoutGuide=_contentLayoutGuide - In the implementation block
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(UILayoutGuide *)contentLayoutGuide;
-(id)initWithReuseIdentifier:(id)arg1 useLayoutMarginsGuide:(BOOL)arg2 ;
-(NSArray *)rtlContentLayoutGuideConstraints;
-(void)setRtlContentLayoutGuideConstraints:(NSArray *)arg1 ;
@end
