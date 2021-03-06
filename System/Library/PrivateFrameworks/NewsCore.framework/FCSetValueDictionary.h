/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSMutableDictionary;

@interface FCSetValueDictionary : NSObject <NSCopying, NSMutableCopying> {

	NSMutableDictionary* _backingDictionary;

}

@property (nonatomic,retain) NSMutableDictionary * backingDictionary;              //@synthesize backingDictionary=_backingDictionary - In the implementation block
-(id)keyEnumerator;
-(void)setBackingDictionary:(NSMutableDictionary *)arg1 ;
-(id)init;
-(void)addObjects:(id)arg1 forKey:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)removeObjectsForKey:(id)arg1 ;
-(id)_setForKey:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)objectsForKey:(id)arg1 ;
-(NSMutableDictionary *)backingDictionary;
-(void)addObject:(id)arg1 forKey:(id)arg2 ;
@end

