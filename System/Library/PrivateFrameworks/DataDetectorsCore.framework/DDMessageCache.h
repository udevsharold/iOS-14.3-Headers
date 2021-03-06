/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <DataDetectorsCore/DataDetectorsCore-Structs.h>
@class NSObject, NSMutableDictionary, NSMutableArray;

@interface DDMessageCache : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _memoryWarningSource;
	NSMutableDictionary* _cache;
	NSMutableArray* _indexLRU;

}
-(id)init;
-(void)removeConversation:(id)arg1 ;
-(void)_pruneIgnoringFirst:(BOOL)arg1 ;
-(id)stringWithElement:(id)arg1 conversationID:(id)arg2 range:(NSRange*)arg3 ;
@end

