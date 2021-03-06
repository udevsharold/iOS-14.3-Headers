/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProactiveContextClient.framework/ProactiveContextClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveContextClient/ProactiveContextClient-Structs.h>
#import <libobjc.A.dylib/ATXProtoBufWrapper.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSArray;

@interface ATXLocationOfInterest : NSObject <ATXProtoBufWrapper, NSSecureCoding, NSCopying> {

	NSUUID* _uuid;
	NSArray* _visits;
	long long _type;
	CLLocationCoordinate2D _coordinate;

}

@property (nonatomic,readonly) NSUUID * uuid;                                  //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSArray * visits;                               //@synthesize visits=_visits - In the implementation block
@property (nonatomic,readonly) long long type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)encodeAsProto;
-(id)initWithProtoData:(id)arg1 ;
-(id)initWithProto:(id)arg1 ;
-(id)proto;
-(long long)_routineLOITypeFromProtoLOIType:(int)arg1 ;
-(int)_protoLOITypeFromRoutineLOIType:(long long)arg1 ;
-(id)init;
-(BOOL)isEqualToLocation:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)visits;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(CLLocationCoordinate2D)coordinate;
-(NSUUID *)uuid;
-(id)description;
-(long long)type;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithUUID:(id)arg1 visits:(id)arg2 coordinate:(CLLocationCoordinate2D)arg3 type:(long long)arg4 ;
-(id)initWithUUID:(id)arg1 visits:(id)arg2 coordinate:(CLLocationCoordinate2D)arg3 ;
-(void)addVisitFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 ;
@end

