/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface DiagCollectionClient : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* destinationDirectory;

}
-(id)init;
-(id)setupXPCInterface;
-(void)collectDEPayloadsWithIdentifier:(id)arg1 diagnosticExtensionsWithParameters:(id)arg2 queue:(id)arg3 reply:(/*^block*/id)arg4 ;
-(id)initWithDestinationDirectory:(id)arg1 ;
-(unsigned)currentLoginUserID;
-(void)moveDiagnosticFilesToDestination:(id)arg1 reply:(/*^block*/id)arg2 ;
@end

