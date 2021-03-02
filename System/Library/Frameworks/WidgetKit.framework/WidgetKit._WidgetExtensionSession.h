/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/WidgetKit.framework/WidgetKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WidgetKit/WidgetKit.WidgetExtensionSession.h>

@interface WidgetKit._WidgetExtensionSession : _UKNOWN_SUPERCLASS_ <WidgetKit.WidgetExtensionSession> {

	 theExtension;
	??? sessionUUID;
	 hostContext;
	 loggingIdentifier;
	 lock;
	 subscriptions;
	 watchdogTimeoutQueue;
	 watchdogTimeoutProvider;
	 rbsInterface;
	 suspensionObserver;
	 widgetExtensionAssertion;
	 lock_invalidated;
	 connection;

}
-(void)getDescriptorsWithCompletion:(/*^block*/id)arg1 ;
-(void)getPlaceholdersWithEnvironment:(id)arg1 for:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)handleURLSessionEventsFor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)attachPreviewAgentWithFrameworkPath:(id)arg1 endpoint:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)getTimelineFor:(id)arg1 into:(id)arg2 environment:(id)arg3 isPreview:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)invalidate;
@end
