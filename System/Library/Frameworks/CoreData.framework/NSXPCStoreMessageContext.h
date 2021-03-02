/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCStore, NSCoreDataXPCMessage, NSDictionary, NSError;

@interface NSXPCStoreMessageContext : NSObject {

	NSXPCStore* _store;
	NSCoreDataXPCMessage* _message;
	NSDictionary* _result;
	NSError* _error;

}

@property (nonatomic,readonly) NSCoreDataXPCMessage * message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) NSXPCStore * store;                          //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) NSDictionary * result;                         //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSError * error;                               //@synthesize error=_error - In the implementation block
-(void)setResult:(NSDictionary *)arg1 ;
-(NSDictionary *)result;
-(NSXPCStore *)store;
-(NSCoreDataXPCMessage *)message;
-(NSError *)error;
-(void)dealloc;
-(void)setError:(NSError *)arg1 ;
-(id)initForMessage:(id)arg1 store:(id)arg2 ;
@end
