/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSPersonNameComponents;

@interface BRFieldUserIdentity : PBCodable <NSCopying> {

	NSData* _serializedNameComponents;

}

@property (nonatomic,retain) NSPersonNameComponents * nameComponents; 
@property (nonatomic,readonly) BOOL hasSerializedNameComponents; 
@property (nonatomic,retain) NSData * serializedNameComponents;                    //@synthesize serializedNameComponents=_serializedNameComponents - In the implementation block
+(id)unknownPersonNameComponents;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setNameComponents:(NSPersonNameComponents *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSPersonNameComponents *)nameComponents;
-(id)initWithCKUserIdentity:(id)arg1 ;
-(void)setSerializedNameComponents:(NSData *)arg1 ;
-(BOOL)hasSerializedNameComponents;
-(NSData *)serializedNameComponents;
-(id)nameComponentsAcceptUnknownUser:(BOOL)arg1 ;
@end
