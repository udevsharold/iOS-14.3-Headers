/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUpUI.framework/CoreFollowUpUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/_UIRemoteViewControllerContaining.h>
#import <libobjc.A.dylib/FLExtensionHostInterface.h>

@class _UIRemoteViewController, NSString;

@interface FLHostViewController : _UIRemoteViewController <_UIRemoteViewControllerContaining, FLExtensionHostInterface>

@property (nonatomic,readonly) _UIRemoteViewController * _containedRemoteViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(id)serviceViewControllerInterface;
-(id)exportedInterface;
-(_UIRemoteViewController *)_containedRemoteViewController;
@end

