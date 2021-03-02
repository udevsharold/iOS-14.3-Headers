/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HMDStreamDataSequenceNumber : HMFObject <NSCopying> {

	unsigned long long _value;

}

@property (readonly) unsigned long long value;                   //@synthesize value=_value - In the implementation block
@property (getter=isInitial,readonly) BOOL initial; 
-(unsigned long long)value;
-(id)attributeDescriptions;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(id)initWithValue:(unsigned long long)arg1 ;
-(BOOL)isInitial;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithStreamDataDictionary:(id)arg1 ;
@end
