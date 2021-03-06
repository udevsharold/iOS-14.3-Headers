/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <NanoRegistry/NRDiffBase.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSDictionary, NRPBDeviceDiff;

@interface NRDeviceDiff : NRDiffBase <NSFastEnumeration> {

	NSDictionary* _diffPropertyDiffs;

}

@property (nonatomic,readonly) NRPBDeviceDiff * protobuf; 
+(BOOL)supportsSecureCoding;
-(id)initWithProtobuf:(id)arg1 ;
-(id)diffPropertyDiffForName:(id)arg1 ;
-(NRPBDeviceDiff *)protobuf;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NR9*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)allPropertyNames;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDiffPropertyDiffs:(id)arg1 ;
-(unsigned long long)count;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

