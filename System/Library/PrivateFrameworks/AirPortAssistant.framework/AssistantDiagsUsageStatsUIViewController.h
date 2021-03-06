/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirPortAssistant/AssistantSubUIViewController.h>
#import <libobjc.A.dylib/TableViewManagerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <libobjc.A.dylib/TextLinkButtonDelegate.h>

@class UIView, TextLinkButton, NSString;

@interface AssistantDiagsUsageStatsUIViewController : AssistantSubUIViewController <TableViewManagerDelegate, UINavigationControllerDelegate, TextLinkButtonDelegate> {

	UIView* _linkContainerView;
	TextLinkButton* linkButton;
	id previousNavDelegate;

}

@property (nonatomic,retain) UIView * linkContainerView;              //@synthesize linkContainerView=_linkContainerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(void)touchInCellAtIndexPath:(id)arg1 ;
-(void)handleTextLinkTap;
-(void)setLinkContainerView:(UIView *)arg1 ;
-(void)setUpInitialTableFooter;
-(UIView *)linkContainerView;
@end

