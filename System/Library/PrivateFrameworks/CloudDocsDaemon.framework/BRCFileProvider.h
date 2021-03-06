/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSFileProvider.h>

@protocol OS_dispatch_queue;
@class NSURL, NSOperationQueue, NSString, BRCAccountSession, NSMutableDictionary, NSObject, brc_task_tracker;

@interface BRCFileProvider : NSObject <NSFileProvider> {

	BRCAccountSession* _session;
	NSURL* _url;
	NSOperationQueue* _queue;
	NSMutableDictionary* _presentersIDsByKey;
	NSObject*<OS_dispatch_queue> _privQueue;
	brc_task_tracker* _tracker;

}

@property (nonatomic,retain) BRCAccountSession * session;                          //@synthesize session=_session - In the implementation block
@property (copy,readonly) NSURL * _providedItemsURL; 
@property (readonly) NSOperationQueue * _providedItemsOperationQueue; 
@property (copy,readonly) NSString * _fileReactorID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)prettyNameForFilePresenterID:(id)arg1 ;
-(void)setSession:(BRCAccountSession *)arg1 ;
-(BRCAccountSession *)session;
-(void)_providedItemAtURL:(id)arg1 withPresenterWithID:(id)arg2 didMoveToURL:(id)arg3 ;
-(void)_providedItemAtURL:(id)arg1 didGainPresenterWithID:(id)arg2 ;
-(NSURL *)_providedItemsURL;
-(void)dumpToContext:(id)arg1 ;
-(NSOperationQueue *)_providedItemsOperationQueue;
-(void)_providedItemAtURL:(id)arg1 didLosePresenterWithID:(id)arg2 ;
-(id)_pathForKey:(id)arg1 ;
-(void)suspend;
-(void)_provideItemAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)resume;
-(id)initWithURL:(id)arg1 name:(id)arg2 ;
-(id)_keyForURL:(id)arg1 ;
-(void)_registerPresenterForItemAtURL:(id)arg1 key:(id)arg2 name:(id)arg3 session:(id)arg4 ;
-(void)_unregisterPresenterForKey:(id)arg1 ;
-(id)_keyForURL:(id)arg1 andID:(id)arg2 ;
@end

