/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSUserDefaults.h>

@protocol OS_dispatch_queue;
@class PKHostPlugIn, NSObject;

@interface PKHostDefaults : NSUserDefaults {

	PKHostPlugIn* _plugin;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (__weak) PKHostPlugIn * plugin;                           //@synthesize plugin=_plugin - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(id)objectForKey:(id)arg1 ;
-(PKHostPlugIn *)plugin;
-(BOOL)synchronize;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setPlugin:(PKHostPlugIn *)arg1 ;
-(void)registerDefaults:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithPlugIn:(id)arg1 ;
@end

