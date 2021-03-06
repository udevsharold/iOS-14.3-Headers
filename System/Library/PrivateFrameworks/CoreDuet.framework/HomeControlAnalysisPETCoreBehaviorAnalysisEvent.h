/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HomeControlAnalysisPETCoreBehaviorAnalysisEvent : PBCodable <NSCopying> {

	double _timestamp;
	NSString* _accessoryUUID;
	NSString* _associatedAccessoryUUIDs;
	NSString* _characteristicType;
	NSString* _eventStreamTitle;
	unsigned _homeOccupancy;
	NSString* _homeUUID;
	NSString* _homekitSource;
	NSString* _microlocation;
	NSString* _sceneUUID;
	NSString* _serviceType;
	NSString* _serviceUUID;
	NSString* _value;
	SCD_Struct_DK5 _has;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
@end

