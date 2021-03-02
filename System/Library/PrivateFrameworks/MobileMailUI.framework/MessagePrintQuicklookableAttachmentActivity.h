/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShareSheet/UIActivity.h>

@class UIPrintPageRenderer;

@interface MessagePrintQuicklookableAttachmentActivity : UIActivity {

	UIPrintPageRenderer* _pageRenderer;

}

@property (nonatomic,retain) UIPrintPageRenderer * pageRenderer;              //@synthesize pageRenderer=_pageRenderer - In the implementation block
-(id)activityType;
-(id)activityImage;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityTitle;
-(void)performActivity;
-(UIPrintPageRenderer *)pageRenderer;
-(id)initWithPrintPageRenderer:(id)arg1 ;
-(void)setPageRenderer:(UIPrintPageRenderer *)arg1 ;
@end
