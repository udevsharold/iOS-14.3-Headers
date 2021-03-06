/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QLItemViewController.h>
#import <UIKit/UIDocumentPasswordViewDelegate.h>

@class QLPreviewContext;

@interface QLPasswordItemViewController : QLItemViewController <UIDocumentPasswordViewDelegate> {

	QLPreviewContext* _context;
	/*^block*/id _completionBlock;

}
-(void)previewDidAppear:(BOOL)arg1 ;
-(void)previewWillDisappear:(BOOL)arg1 ;
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)canSwipeToDismiss;
-(BOOL)canPinchToDismiss;
-(BOOL)canEnterFullScreen;
-(void)userDidEnterPassword:(id)arg1 forPasswordView:(id)arg2 ;
-(id)passwordView;
-(void)loadView;
-(void)invalidate;
@end

