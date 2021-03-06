/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class STStorageApp, STStoragePlugin, UIProgressHUD;

@interface CKCloudMessagesDetailController : PSListController {

	STStorageApp* _messagesApp;
	STStoragePlugin* _plugin;
	UIProgressHUD* _cloudKitProgressView;

}

@property (nonatomic,retain) UIProgressHUD * cloudKitProgressView;              //@synthesize cloudKitProgressView=_cloudKitProgressView - In the implementation block
+(id)specifier;
-(id)specifiers;
-(id)init;
-(id)dataSize:(id)arg1 ;
-(void)hideSpinner;
-(void)undoDelete:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setEnabledDidReturned:(id)arg1 ;
-(void)tryToDisableAllDevicesDidReturn:(id)arg1 ;
-(void)disableAndDelete:(id)arg1 ;
-(id)cloudDocsSpecifiers;
-(void)showSpinnerMessage:(id)arg1 ;
-(void)_displayiCloudErrorMessage;
-(UIProgressHUD *)cloudKitProgressView;
-(void)setCloudKitProgressView:(UIProgressHUD *)arg1 ;
@end

