/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SYStartSyncSession;

@interface _SYQueuedStartSession : NSObject {

	SYStartSyncSession* _request;
	/*^block*/id _completion;

}

@property (nonatomic,readonly) SYStartSyncSession * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) id completion;                             //@synthesize completion=_completion - In the implementation block
-(SYStartSyncSession *)request;
-(id)completion;
-(id)initWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

