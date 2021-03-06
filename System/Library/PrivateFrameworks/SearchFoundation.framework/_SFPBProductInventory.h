/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBProductInventory.h>
@class NSString, _SFPBDate, NSData;


@protocol _SFPBProductInventory <NSObject>
@property (assign,nonatomic) int type; 
@property (nonatomic,copy) NSString * storeId; 
@property (assign,nonatomic) int availabilityStatus; 
@property (assign,nonatomic) float distance; 
@property (assign,nonatomic) int distanceUnit; 
@property (nonatomic,retain) _SFPBDate * timestamp; 
@property (nonatomic,copy) NSString * storeName; 
@property (nonatomic,copy) NSString * storeAddress; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSData *)jsonData;
-(_SFPBDate *)timestamp;
-(NSString *)storeId;
-(float)distance;
-(void)setDistance:(float)arg1;
-(void)setType:(int)arg1;
-(void)setTimestamp:(id)arg1;
-(void)setStoreId:(id)arg1;
-(void)setAvailabilityStatus:(int)arg1;
-(void)setDistanceUnit:(int)arg1;
-(void)setStoreAddress:(id)arg1;
-(int)availabilityStatus;
-(int)distanceUnit;
-(NSString *)storeAddress;
-(NSString *)storeName;
-(void)setStoreName:(id)arg1;
-(int)type;
-(id)initWithJSON:(id)arg1;
-(id)initWithDictionary:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, _SFPBDate, NSData;

@interface _SFPBProductInventory : PBCodable <_SFPBProductInventory, NSSecureCoding> {

	int _type;
	int _availabilityStatus;
	float _distance;
	int _distanceUnit;
	NSString* _storeId;
	_SFPBDate* _timestamp;
	NSString* _storeName;
	NSString* _storeAddress;

}

@property (assign,nonatomic) int type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * storeId;                      //@synthesize storeId=_storeId - In the implementation block
@property (assign,nonatomic) int availabilityStatus;                //@synthesize availabilityStatus=_availabilityStatus - In the implementation block
@property (assign,nonatomic) float distance;                        //@synthesize distance=_distance - In the implementation block
@property (assign,nonatomic) int distanceUnit;                      //@synthesize distanceUnit=_distanceUnit - In the implementation block
@property (nonatomic,retain) _SFPBDate * timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) NSString * storeName;                    //@synthesize storeName=_storeName - In the implementation block
@property (nonatomic,copy) NSString * storeAddress;                 //@synthesize storeAddress=_storeAddress - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSData *)jsonData;
-(_SFPBDate *)timestamp;
-(NSString *)storeId;
-(float)distance;
-(void)setDistance:(float)arg1 ;
-(void)setType:(int)arg1 ;
-(void)setTimestamp:(_SFPBDate *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setStoreId:(NSString *)arg1 ;
-(void)setAvailabilityStatus:(int)arg1 ;
-(void)setDistanceUnit:(int)arg1 ;
-(void)setStoreAddress:(NSString *)arg1 ;
-(int)availabilityStatus;
-(int)distanceUnit;
-(NSString *)storeAddress;
-(NSString *)storeName;
-(void)setStoreName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(int)type;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithFacade:(id)arg1 ;
@end

