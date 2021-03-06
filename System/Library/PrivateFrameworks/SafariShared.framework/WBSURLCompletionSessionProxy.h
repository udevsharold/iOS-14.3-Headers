/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WBSURLCompletionSessionProtocol, OS_dispatch_queue;
@class WBSHistoryConnectionProxy, NSObject;

@interface WBSURLCompletionSessionProxy : NSObject {

	WBSHistoryConnectionProxy* _historyConnectionProxy;
	id<WBSURLCompletionSessionProtocol> _completionSession;
	NSObject*<OS_dispatch_queue> _completionSessionAccessQueue;

}
-(id)init;
-(void)_completionSessionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)userDidSelectCompletionMatch:(id)arg1 forTypedString:(id)arg2 ;
-(void)getBestMatchesForTypedString:(id)arg1 limit:(unsigned long long)arg2 forQueryID:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

