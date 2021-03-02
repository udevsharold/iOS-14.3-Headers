/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CHSynchronizable.h>

@protocol CHSynchronizable <NSObject>
@required
-(void)execute:(/*^block*/id)arg1;
-(void)executeSync:(/*^block*/id)arg1;
-(id)executeSyncWithResult:(/*^block*/id)arg1;
-(id)queue;
-(BOOL)executeSyncWithBOOL:(/*^block*/id)arg1;

@end


@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface CHSynchronizable : NSObject <CHSynchronizable> {

	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)execute:(/*^block*/id)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(void)executeSync:(/*^block*/id)arg1 ;
-(id)executeSyncWithResult:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithName:(const char*)arg1 ;
-(BOOL)executeSyncWithBOOL:(/*^block*/id)arg1 ;
@end
