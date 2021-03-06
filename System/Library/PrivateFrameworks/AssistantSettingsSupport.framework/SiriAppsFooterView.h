/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AssistantSettingsSupport.framework/AssistantSettingsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSFooterHyperlinkView.h>

@protocol SiriAppsFooterViewDelegate;
@interface SiriAppsFooterView : PSFooterHyperlinkView {

	id<SiriAppsFooterViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SiriAppsFooterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithSpecifier:(id)arg1 ;
-(void)setDelegate:(id<SiriAppsFooterViewDelegate>)arg1 ;
-(id<SiriAppsFooterViewDelegate>)delegate;
-(void)didTapLearnMore:(id)arg1 ;
@end

