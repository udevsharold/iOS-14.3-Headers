/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Intents/Intents-Structs.h>
@class NSMutableDictionary;

@interface INExecutionCounterpartMapper : NSObject {

	BOOL _filled;
	os_unfair_lock_s _lock;
	NSMutableDictionary* _mapping;

}

@property (nonatomic,copy,readonly) NSMutableDictionary * _mapping;              //@synthesize mapping=_mapping - In the implementation block
@property (nonatomic,readonly) BOOL _filled;                                     //@synthesize filled=_filled - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s _lock;                           //@synthesize lock=_lock - In the implementation block
+(void)initialize;
-(NSMutableDictionary *)_mapping;
-(id)init;
-(void)reset;
-(void)dealloc;
-(BOOL)_filled;
-(id)counterpartIdentifiersForLocalIdentifier:(id)arg1 ;
-(id)localIdentifiersForCounterpartIdentifier:(id)arg1 ;
-(void)installedApplicationsDidChange:(id)arg1 ;
-(id)counterpartBundleIdentifiersForBundleIdentifier:(id)arg1 ;
-(os_unfair_lock_s)_lock;
@end

