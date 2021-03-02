/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIStackView.h>

@class UITextView, NSMutableArray;

@interface OBPrivacySplashListView : UIStackView {

	BOOL _displayingPrivacyPane;
	UITextView* _footerTextView;
	NSMutableArray* _textViews;
	NSMutableArray* _stackedIconTextLists;

}

@property (assign) BOOL displayingPrivacyPane;                                   //@synthesize displayingPrivacyPane=_displayingPrivacyPane - In the implementation block
@property (nonatomic,retain) NSMutableArray * textViews;                         //@synthesize textViews=_textViews - In the implementation block
@property (nonatomic,retain) NSMutableArray * stackedIconTextLists;              //@synthesize stackedIconTextLists=_stackedIconTextLists - In the implementation block
@property (nonatomic,readonly) UITextView * footerTextView;                      //@synthesize footerTextView=_footerTextView - In the implementation block
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)updateFonts;
-(NSMutableArray *)textViews;
-(id)initWithContentList:(id)arg1 dataDetectorTypes:(unsigned long long)arg2 displayingPrivacyPane:(BOOL)arg3 ;
-(void)setDisplayingPrivacyPane:(BOOL)arg1 ;
-(NSMutableArray *)stackedIconTextLists;
-(void)updateSpacing;
-(void)updateTextAlignment;
-(BOOL)displayingPrivacyPane;
-(id)initWithContentList:(id)arg1 dataDetectorTypes:(unsigned long long)arg2 ;
-(void)setTextViews:(NSMutableArray *)arg1 ;
-(void)setStackedIconTextLists:(NSMutableArray *)arg1 ;
-(UITextView *)footerTextView;
@end
