/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <QuickLook/QLPreviewController.h>

@interface CKQLPreviewController : QLPreviewController {

	BOOL _controllerWasDismissed;
	BOOL _suppressRefetchingCurrentHighQualityImage;

}

@property (assign,nonatomic) BOOL controllerWasDismissed;                                 //@synthesize controllerWasDismissed=_controllerWasDismissed - In the implementation block
@property (assign,nonatomic) BOOL suppressRefetchingCurrentHighQualityImage;              //@synthesize suppressRefetchingCurrentHighQualityImage=_suppressRefetchingCurrentHighQualityImage - In the implementation block
-(long long)preferredStatusBarStyle;
-(id)init;
-(CGSize)preferredContentSize;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)previewActions;
-(id)currentPreviewItem;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)controllerWasDismissed;
-(void)setControllerWasDismissed:(BOOL)arg1 ;
-(BOOL)suppressRefetchingCurrentHighQualityImage;
-(void)setSuppressRefetchingCurrentHighQualityImage:(BOOL)arg1 ;
-(void)loadView;
@end
