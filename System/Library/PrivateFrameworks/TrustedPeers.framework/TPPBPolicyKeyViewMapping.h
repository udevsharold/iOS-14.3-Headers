/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrustedPeers/TrustedPeers-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TPPBDictionaryMatchingRule, NSString;

@interface TPPBPolicyKeyViewMapping : PBCodable <NSCopying> {

	TPPBDictionaryMatchingRule* _matchingRule;
	NSString* _view;

}

@property (nonatomic,readonly) BOOL hasMatchingRule; 
@property (nonatomic,retain) TPPBDictionaryMatchingRule * matchingRule;              //@synthesize matchingRule=_matchingRule - In the implementation block
@property (nonatomic,readonly) BOOL hasView; 
@property (nonatomic,retain) NSString * view;                                        //@synthesize view=_view - In the implementation block
+(id)TPPBPolicyKeyViewMappingWithView:(id)arg1 matchingRule:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)view;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setView:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasView;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasMatchingRule;
-(TPPBDictionaryMatchingRule *)matchingRule;
-(void)setMatchingRule:(TPPBDictionaryMatchingRule *)arg1 ;
@end

