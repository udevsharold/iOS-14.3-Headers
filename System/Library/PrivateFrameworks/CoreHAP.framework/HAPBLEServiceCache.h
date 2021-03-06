/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSNumber, NSArray, NSMutableArray;

@interface HAPBLEServiceCache : HMFObject <NSSecureCoding> {

	NSUUID* _serviceUUID;
	NSNumber* _serviceInstanceId;
	unsigned long long _serviceInstanceOrder;
	unsigned long long _serviceProperties;
	NSArray* _linkedServices;
	NSMutableArray* _cachedCharacteristics;

}

@property (assign,nonatomic) unsigned long long serviceInstanceOrder;              //@synthesize serviceInstanceOrder=_serviceInstanceOrder - In the implementation block
@property (assign,nonatomic) unsigned long long serviceProperties;                 //@synthesize serviceProperties=_serviceProperties - In the implementation block
@property (nonatomic,retain) NSArray * linkedServices;                             //@synthesize linkedServices=_linkedServices - In the implementation block
@property (nonatomic,retain) NSMutableArray * cachedCharacteristics;               //@synthesize cachedCharacteristics=_cachedCharacteristics - In the implementation block
@property (nonatomic,readonly) NSUUID * serviceUUID;                               //@synthesize serviceUUID=_serviceUUID - In the implementation block
@property (nonatomic,readonly) NSNumber * serviceInstanceId;                       //@synthesize serviceInstanceId=_serviceInstanceId - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)serviceProperties;
-(NSUUID *)serviceUUID;
-(void)updateWithService:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setLinkedServices:(NSArray *)arg1 ;
-(NSArray *)linkedServices;
-(void)setServiceProperties:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)updateWithCharacteristic:(id)arg1 ;
-(NSNumber *)serviceInstanceId;
-(unsigned long long)serviceInstanceOrder;
-(void)setServiceInstanceOrder:(unsigned long long)arg1 ;
-(NSMutableArray *)cachedCharacteristics;
-(void)setCachedCharacteristics:(NSMutableArray *)arg1 ;
-(id)initWithServiceUUID:(id)arg1 instanceId:(id)arg2 instanceOrder:(unsigned long long)arg3 serviceProperties:(unsigned long long)arg4 linkedServices:(id)arg5 ;
@end

