/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRAVOutputDeviceDescriptorProtobuf, NSString, NSMutableArray;

@interface _MRAVEndpointDescriptorProtobuf : PBCodable <NSCopying> {

	int _connectionType;
	_MRAVOutputDeviceDescriptorProtobuf* _designatedGroupLeader;
	NSString* _instanceIdentifier;
	NSString* _name;
	NSMutableArray* _outputDevices;
	NSMutableArray* _personalOutputDevices;
	NSString* _uniqueIdentifier;
	BOOL _canModifyGroupMembership;
	BOOL _isLocalEndpoint;
	BOOL _isProxyGroupPlayer;
	SCD_Struct_MR15 _has;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasUniqueIdentifier; 
@property (nonatomic,retain) NSString * uniqueIdentifier;                                              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * outputDevices;                                           //@synthesize outputDevices=_outputDevices - In the implementation block
@property (nonatomic,readonly) BOOL hasDesignatedGroupLeader; 
@property (nonatomic,retain) _MRAVOutputDeviceDescriptorProtobuf * designatedGroupLeader;              //@synthesize designatedGroupLeader=_designatedGroupLeader - In the implementation block
@property (assign,nonatomic) BOOL hasIsLocalEndpoint; 
@property (assign,nonatomic) BOOL isLocalEndpoint;                                                     //@synthesize isLocalEndpoint=_isLocalEndpoint - In the implementation block
@property (nonatomic,readonly) BOOL hasInstanceIdentifier; 
@property (nonatomic,retain) NSString * instanceIdentifier;                                            //@synthesize instanceIdentifier=_instanceIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasIsProxyGroupPlayer; 
@property (assign,nonatomic) BOOL isProxyGroupPlayer;                                                  //@synthesize isProxyGroupPlayer=_isProxyGroupPlayer - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionType; 
@property (assign,nonatomic) int connectionType;                                                       //@synthesize connectionType=_connectionType - In the implementation block
@property (assign,nonatomic) BOOL hasCanModifyGroupMembership; 
@property (assign,nonatomic) BOOL canModifyGroupMembership;                                            //@synthesize canModifyGroupMembership=_canModifyGroupMembership - In the implementation block
@property (nonatomic,retain) NSMutableArray * personalOutputDevices;                                   //@synthesize personalOutputDevices=_personalOutputDevices - In the implementation block
+(Class)outputDevicesType;
+(Class)personalOutputDevicesType;
-(int)connectionType;
-(void)setOutputDevices:(NSMutableArray *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSMutableArray *)outputDevices;
-(id)connectionTypeAsString:(int)arg1 ;
-(BOOL)canModifyGroupMembership;
-(BOOL)isProxyGroupPlayer;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasIsProxyGroupPlayer:(BOOL)arg1 ;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(BOOL)isLocalEndpoint;
-(void)setConnectionType:(int)arg1 ;
-(BOOL)hasIsProxyGroupPlayer;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasConnectionType;
-(unsigned long long)hash;
-(NSString *)uniqueIdentifier;
-(id)description;
-(BOOL)hasName;
-(void)setIsProxyGroupPlayer:(BOOL)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)personalOutputDevices;
-(void)setHasConnectionType:(BOOL)arg1 ;
-(BOOL)hasUniqueIdentifier;
-(NSString *)name;
-(_MRAVOutputDeviceDescriptorProtobuf *)designatedGroupLeader;
-(void)addOutputDevices:(id)arg1 ;
-(void)addPersonalOutputDevices:(id)arg1 ;
-(unsigned long long)outputDevicesCount;
-(void)clearOutputDevices;
-(int)StringAsConnectionType:(id)arg1 ;
-(id)outputDevicesAtIndex:(unsigned long long)arg1 ;
-(void)setDesignatedGroupLeader:(_MRAVOutputDeviceDescriptorProtobuf *)arg1 ;
-(unsigned long long)personalOutputDevicesCount;
-(void)clearPersonalOutputDevices;
-(id)personalOutputDevicesAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasDesignatedGroupLeader;
-(void)setIsLocalEndpoint:(BOOL)arg1 ;
-(void)setHasIsLocalEndpoint:(BOOL)arg1 ;
-(BOOL)hasIsLocalEndpoint;
-(BOOL)hasInstanceIdentifier;
-(void)setCanModifyGroupMembership:(BOOL)arg1 ;
-(void)setHasCanModifyGroupMembership:(BOOL)arg1 ;
-(BOOL)hasCanModifyGroupMembership;
-(void)setPersonalOutputDevices:(NSMutableArray *)arg1 ;
-(NSString *)instanceIdentifier;
-(void)setInstanceIdentifier:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
@end

