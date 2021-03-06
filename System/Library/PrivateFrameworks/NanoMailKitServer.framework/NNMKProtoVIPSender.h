/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface NNMKProtoVIPSender : PBCodable <NSCopying> {

	NSString* _displayName;
	NSMutableArray* _emailAddresses;
	NSString* _name;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayName; 
@property (nonatomic,retain) NSString * displayName;                       //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSMutableArray * emailAddresses;              //@synthesize emailAddresses=_emailAddresses - In the implementation block
+(Class)emailAddressesType;
+(id)protoVIP:(id)arg1 ;
-(void)setEmailAddresses:(NSMutableArray *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)emailAddresses;
-(BOOL)readFrom:(id)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)hasName;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)emailAddressesAtIndex:(unsigned long long)arg1 ;
-(void)addEmailAddresses:(id)arg1 ;
-(BOOL)hasDisplayName;
-(NSString *)name;
-(unsigned long long)emailAddressesCount;
-(void)clearEmailAddresses;
-(void)writeTo:(id)arg1 ;
-(NSString *)displayName;
-(id)vipSender;
@end

