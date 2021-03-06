/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UsageTracking.framework/UsageTracking
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _CDAsyncLocalContext, _DKKnowledgeSaving;
#import <UsageTracking/UsageTracking-Structs.h>
@class NSMutableDictionary, NSURL, NSString;

@interface USWebpageUsage : NSObject {

	NSMutableDictionary* _contextUsageRecord;
	BOOL _usageTrusted;
	NSURL* _URL;
	NSString* _bundleIdentifier;
	id<_CDAsyncLocalContext> _context;
	id<_DKKnowledgeSaving> _eventStorage;

}

@property (copy,readonly) NSString * bundleIdentifier;                 //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (readonly) BOOL usageTrusted;                                //@synthesize usageTrusted=_usageTrusted - In the implementation block
@property (readonly) id<_CDAsyncLocalContext> context;                 //@synthesize context=_context - In the implementation block
@property (readonly) id<_DKKnowledgeSaving> eventStorage;              //@synthesize eventStorage=_eventStorage - In the implementation block
@property (copy,readonly) NSURL * URL;                                 //@synthesize URL=_URL - In the implementation block
+(id)getProcessIdentifier;
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(id)description;
-(id<_CDAsyncLocalContext>)context;
-(NSString *)bundleIdentifier;
-(NSURL *)URL;
-(id)initWithURL:(id)arg1 bundleIdentifier:(id)arg2 ;
-(void)changeState:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)usageTrusted;
-(id<_DKKnowledgeSaving>)eventStorage;
-(id)initWithURL:(id)arg1 context:(id)arg2 eventStorage:(id)arg3 bundleIdentifier:(id)arg4 usageTrusted:(BOOL)arg5 ;
-(id)initWithURL:(id)arg1 bundleIdentifier:(id)arg2 auditToken:(SCD_Struct_US3)arg3 ;
@end

