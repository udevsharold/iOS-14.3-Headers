/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmailDaemon/EmailDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/EDPBDataSetters.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface EDPBInteractionEventMessageMoved : PBCodable <EDPBDataSetters, NSCopying> {

	long long _accountId;
	long long _conversationId;
	long long _fromMailboxId;
	long long _messageId;
	long long _toMailboxId;
	int _fromMailboxType;
	int _toMailboxType;
	SCD_Struct_ED11 _has;

}

@property (assign,nonatomic) BOOL hasAccountId; 
@property (assign,nonatomic) long long accountId;                   //@synthesize accountId=_accountId - In the implementation block
@property (assign,nonatomic) BOOL hasConversationId; 
@property (assign,nonatomic) long long conversationId;              //@synthesize conversationId=_conversationId - In the implementation block
@property (assign,nonatomic) BOOL hasMessageId; 
@property (assign,nonatomic) long long messageId;                   //@synthesize messageId=_messageId - In the implementation block
@property (assign,nonatomic) BOOL hasFromMailboxId; 
@property (assign,nonatomic) long long fromMailboxId;               //@synthesize fromMailboxId=_fromMailboxId - In the implementation block
@property (assign,nonatomic) BOOL hasFromMailboxType; 
@property (assign,nonatomic) int fromMailboxType;                   //@synthesize fromMailboxType=_fromMailboxType - In the implementation block
@property (assign,nonatomic) BOOL hasToMailboxId; 
@property (assign,nonatomic) long long toMailboxId;                 //@synthesize toMailboxId=_toMailboxId - In the implementation block
@property (assign,nonatomic) BOOL hasToMailboxType; 
@property (assign,nonatomic) int toMailboxType;                     //@synthesize toMailboxType=_toMailboxType - In the implementation block
-(long long)messageId;
-(void)setMessageId:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasMessageId;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)conversationId;
-(void)copyTo:(id)arg1 ;
-(long long)accountId;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setAccountId:(long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasAccountId;
-(void)setHasAccountId:(BOOL)arg1 ;
-(void)withHasher:(id)arg1 setMessage:(id)arg2 mailbox:(id)arg3 ;
-(void)setConversationId:(long long)arg1 ;
-(void)setFromMailboxId:(long long)arg1 ;
-(void)setFromMailboxType:(int)arg1 ;
-(void)setToMailboxId:(long long)arg1 ;
-(void)setToMailboxType:(int)arg1 ;
-(void)setHasConversationId:(BOOL)arg1 ;
-(BOOL)hasConversationId;
-(void)setHasMessageId:(BOOL)arg1 ;
-(void)setHasFromMailboxId:(BOOL)arg1 ;
-(BOOL)hasFromMailboxId;
-(int)fromMailboxType;
-(void)setHasFromMailboxType:(BOOL)arg1 ;
-(BOOL)hasFromMailboxType;
-(id)fromMailboxTypeAsString:(int)arg1 ;
-(int)StringAsFromMailboxType:(id)arg1 ;
-(void)setHasToMailboxId:(BOOL)arg1 ;
-(BOOL)hasToMailboxId;
-(int)toMailboxType;
-(void)setHasToMailboxType:(BOOL)arg1 ;
-(BOOL)hasToMailboxType;
-(id)toMailboxTypeAsString:(int)arg1 ;
-(int)StringAsToMailboxType:(id)arg1 ;
-(long long)fromMailboxId;
-(long long)toMailboxId;
@end

