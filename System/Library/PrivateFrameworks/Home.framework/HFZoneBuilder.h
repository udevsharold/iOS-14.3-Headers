/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemBuilder.h>

@class NSString, HFMutableSetDiff, HMZone, NSSet;

@interface HFZoneBuilder : HFItemBuilder {

	NSString* _name;
	HFMutableSetDiff* _roomUUIDs;

}

@property (nonatomic,retain) HFMutableSetDiff * roomUUIDs;              //@synthesize roomUUIDs=_roomUUIDs - In the implementation block
@property (nonatomic,readonly) HMZone * zone; 
@property (nonatomic,copy) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSSet * rooms; 
+(id)na_identity;
+(Class)homeKitRepresentationClass;
-(HMZone *)zone;
-(void)setName:(NSString *)arg1 ;
-(id)_updateName;
-(NSSet *)rooms;
-(id)initWithExistingObject:(id)arg1 inHome:(id)arg2 ;
-(unsigned long long)hash;
-(void)setZone:(HMZone *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)_updateRooms;
-(NSString *)name;
-(id)_performValidation;
-(void)addRoom:(id)arg1 ;
-(id)commitItem;
-(HFMutableSetDiff *)roomUUIDs;
-(void)setRoomUUIDs:(HFMutableSetDiff *)arg1 ;
-(id)_createZone;
-(void)removeRoom:(id)arg1 ;
@end

