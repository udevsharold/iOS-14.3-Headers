/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PKProtobufPromptDetailsForVirtualCard : PBCodable <NSCopying> {

	NSString* _identifier;
	BOOL _showNotification;
	SCD_Struct_PK13 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasShowNotification; 
@property (assign,nonatomic) BOOL showNotification;                 //@synthesize showNotification=_showNotification - In the implementation block
-(BOOL)hasIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(unsigned long long)hash;
-(NSString *)identifier;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)showNotification;
-(void)setShowNotification:(BOOL)arg1 ;
-(BOOL)hasShowNotification;
-(void)setHasShowNotification:(BOOL)arg1 ;
-(void)writeTo:(id)arg1 ;
@end

