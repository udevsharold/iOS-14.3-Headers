/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MTPersistence.h>

@class NSMutableDictionary, NSString;

@interface MTInMemoryDefaults : NSObject <MTPersistence> {

	NSMutableDictionary* _storage;

}

@property (nonatomic,retain) NSMutableDictionary * storage;              //@synthesize storage=_storage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)objectForKey:(id)arg1 ;
-(void)setFloat:(float)arg1 forKey:(id)arg2 ;
-(id)init;
-(NSMutableDictionary *)storage;
-(float)floatForKey:(id)arg1 ;
-(void)setStorage:(NSMutableDictionary *)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)objectForKey:(id)arg1 defaultValue:(id)arg2 ;
@end
