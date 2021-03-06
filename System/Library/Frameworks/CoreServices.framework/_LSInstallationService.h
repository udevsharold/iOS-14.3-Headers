/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface _LSInstallationService : NSObject <NSXPCListenerDelegate> {

	NSObject*<OS_dispatch_queue> _databaseQueue;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (readonly) NSObject*<OS_dispatch_queue> databaseQueue;              //@synthesize databaseQueue=_databaseQueue - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> serialQueue;                //@synthesize serialQueue=_serialQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)beginListening;
+(id)serviceQueue;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(NSObject*<OS_dispatch_queue>)databaseQueue;
-(id)initWithQueue:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end

