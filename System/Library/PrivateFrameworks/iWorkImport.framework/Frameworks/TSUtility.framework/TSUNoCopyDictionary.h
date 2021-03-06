/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUtility-Structs.h>
#import <CoreFoundation/NSMutableDictionary.h>

@interface TSUNoCopyDictionary : NSMutableDictionary {

	CFDictionaryRef mDictionary;

}
-(id)objectForKey:(id)arg1 ;
-(id)keyEnumerator;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)allValues;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)allKeys;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_TS1*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)count;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 ;
-(void)removeAllObjects;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)objectEnumerator;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forUncopiedKey:(id)arg2 ;
-(id)initWithCFDictionary:(CFDictionaryRef)arg1 ;
@end

