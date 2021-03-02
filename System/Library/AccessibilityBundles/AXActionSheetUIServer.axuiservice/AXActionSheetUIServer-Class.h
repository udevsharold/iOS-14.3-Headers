/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/AccessibilityBundles/AXActionSheetUIServer.axuiservice/AXActionSheetUIServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXActionSheetUIServer/AXUIAlertDelegate.h>
#import <AXActionSheetUIServer/AXUIService.h>
#import <AXActionSheetUIServer/AXUIContentViewControllerDelegate.h>

@class UIAlertController, UIViewController, NSMutableSet, NSString;

@interface AXActionSheetUIServer : NSObject <AXUIAlertDelegate, AXUIService, AXUIContentViewControllerDelegate> {

	UIAlertController* _alertController;
	UIViewController* _emptyViewController;
	NSMutableSet* _actionSheetClients;
	NSString* _alertIdentifier;

}

@property (nonatomic,retain) NSString * alertIdentifier;              //@synthesize alertIdentifier=_alertIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)desiredWindowLevelForContentViewController:(id)arg1 userInteractionEnabled:(BOOL)arg2 ;
-(id)processMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 fromClientWithIdentifier:(id)arg3 error:(id*)arg4 ;
-(void)alertWithIdentifierDidDisappear:(id)arg1 ;
-(void)alertWithIdentifierWasActivated:(id)arg1 ;
-(void)_informClientOfChoice:(long long)arg1 ;
-(NSString *)alertIdentifier;
-(void)setAlertIdentifier:(NSString *)arg1 ;
@end
