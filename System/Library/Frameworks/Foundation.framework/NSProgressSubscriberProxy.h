/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSProgressSubscriber.h>

@protocol NSProgressSubscriber;
@class NSString, NSFileAccessNode, NSXPCConnection;

@interface NSProgressSubscriberProxy : NSObject <NSProgressSubscriber> {

	id<NSProgressSubscriber> _forwarder;
	id _subscriberID;
	NSString* _bundleID;
	NSString* _lowerCaseCategoryName;
	NSFileAccessNode* _itemLocation;
	NSXPCConnection* _connection;

}

@property (copy) NSString * category;                               //@synthesize lowerCaseCategoryName=_lowerCaseCategoryName - In the implementation block
@property (assign) NSFileAccessNode * itemLocation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithForwarder:(id)arg1 onConnection:(id)arg2 subscriberID:(id)arg3 appBundleID:(id)arg4 ;
-(NSString *)category;
-(oneway void)observePublisherUserInfoForID:(id)arg1 value:(id)arg2 forKey:(id)arg3 ;
-(oneway void)addPublisher:(id)arg1 forID:(id)arg2 withValues:(id)arg3 isOld:(BOOL)arg4 ;
-(id)descriptionWithIndenting:(id)arg1 ;
-(NSFileAccessNode *)itemLocation;
-(void)dealloc;
-(oneway void)removePublisherForID:(id)arg1 ;
-(BOOL)isFromConnection:(id)arg1 ;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)description;
-(void)setItemLocation:(NSFileAccessNode *)arg1 ;
-(oneway void)observePublisherForID:(id)arg1 values:(id)arg2 forKeys:(id)arg3 ;
-(id)appBundleID;
@end

