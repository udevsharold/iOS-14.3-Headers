/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSRemotePlistControllerDelegate.h>

@class WBSRemotePlistController, NSString;

@interface WBSPasswordBreachConfigurationBagLoader : NSObject <WBSRemotePlistControllerDelegate> {

	WBSRemotePlistController* _remotePlistController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedLoader;
-(id)init;
-(void)dealloc;
-(void)getConfigurationBagWithCompletionHandler:(/*^block*/id)arg1 ;
@end
