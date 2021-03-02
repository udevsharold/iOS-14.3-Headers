/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <Foundation/NSMutableCharacterSet.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface __NSCFCharacterSet : NSMutableCharacterSet <NSSecureCoding>
+(BOOL)supportsSecureCoding;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)formIntersectionWithCharacterSet:(id)arg1 ;
-(void)removeCharactersInRange:(NSRange)arg1 ;
-(void)addCharactersInString:(id)arg1 ;
-(void)invert;
-(void)makeCharacterSetCompact;
-(void)formUnionWithCharacterSet:(id)arg1 ;
-(BOOL)hasMemberInPlane:(unsigned char)arg1 ;
-(void)removeCharactersInString:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(BOOL)characterIsMember:(unsigned short)arg1 ;
-(unsigned long long)retainCount;
-(BOOL)longCharacterIsMember:(unsigned)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)bitmapRepresentation;
-(void)makeCharacterSetFast;
-(id)retain;
-(BOOL)isEqual:(id)arg1 ;
-(id)invertedSet;
-(oneway void)release;
-(BOOL)isSupersetOfSet:(id)arg1 ;
-(Class)classForCoder;
-(void)addCharactersInRange:(NSRange)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
