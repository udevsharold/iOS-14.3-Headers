/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCStore, NSXPCConnection;

@interface NSXPCStoreConnection : NSObject {

	NSXPCStore* _store;
	NSXPCConnection* _connection;

}
-(void)disconnect;
-(void)reconnect;
-(void)dealloc;
-(id)createConnectionWithOptions:(id)arg1 ;
-(void)sendMessageWithContext:(id)arg1 ;
-(id)initForStore:(id)arg1 ;
-(id)sendMessage:(id)arg1 store:(id)arg2 error:(id*)arg3 ;
@end

