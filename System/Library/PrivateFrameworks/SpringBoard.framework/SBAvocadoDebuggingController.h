/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBExtensionHandling.h>

@class NSHashTable, NSString;

@interface SBAvocadoDebuggingController : NSObject <SBExtensionHandling> {

	NSHashTable* _inFlightAnimationTransactions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)launchExtensionWithBundleID:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_descriptorForWidgetFromExtension:(id)arg1 forRequestedKind:(id)arg2 widgetFamily:(long long*)arg3 toolService:(id)arg4 error:(id*)arg5 ;
-(void)reallyLaunchToWidgetOnHomeScreenForDescriptor:(id)arg1 widgetFamily:(long long)arg2 ;
@end
