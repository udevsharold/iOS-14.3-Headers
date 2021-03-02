/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString, ATXPBHomeScreenCachedSuggestion, ATXPBSuggestionLayout;

@interface ATXPBBlendingModelUICacheUpdate : PBCodable <NSCopying> {

	double _cacheCreationDate;
	NSMutableArray* _clientModelCacheUpdateUUIDStrings;
	NSMutableArray* _clientModelIds;
	NSString* _consumerSubTypeString;
	ATXPBHomeScreenCachedSuggestion* _homeScreenCachedSuggestion;
	ATXPBSuggestionLayout* _suggestionLayout;
	NSString* _uuidString;
	SCD_Struct_AT5 _has;

}

@property (nonatomic,readonly) BOOL hasUuidString; 
@property (nonatomic,retain) NSString * uuidString;                                                     //@synthesize uuidString=_uuidString - In the implementation block
@property (nonatomic,readonly) BOOL hasConsumerSubTypeString; 
@property (nonatomic,retain) NSString * consumerSubTypeString;                                          //@synthesize consumerSubTypeString=_consumerSubTypeString - In the implementation block
@property (nonatomic,retain) NSMutableArray * clientModelIds;                                           //@synthesize clientModelIds=_clientModelIds - In the implementation block
@property (nonatomic,retain) NSMutableArray * clientModelCacheUpdateUUIDStrings;                        //@synthesize clientModelCacheUpdateUUIDStrings=_clientModelCacheUpdateUUIDStrings - In the implementation block
@property (nonatomic,readonly) BOOL hasHomeScreenCachedSuggestion; 
@property (nonatomic,retain) ATXPBHomeScreenCachedSuggestion * homeScreenCachedSuggestion;              //@synthesize homeScreenCachedSuggestion=_homeScreenCachedSuggestion - In the implementation block
@property (nonatomic,readonly) BOOL hasSuggestionLayout; 
@property (nonatomic,retain) ATXPBSuggestionLayout * suggestionLayout;                                  //@synthesize suggestionLayout=_suggestionLayout - In the implementation block
@property (assign,nonatomic) BOOL hasCacheCreationDate; 
@property (assign,nonatomic) double cacheCreationDate;                                                  //@synthesize cacheCreationDate=_cacheCreationDate - In the implementation block
+(Class)clientModelIdsType;
+(Class)clientModelCacheUpdateUUIDStringsType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)uuidString;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setUuidString:(NSString *)arg1 ;
-(BOOL)hasUuidString;
-(NSMutableArray *)clientModelIds;
-(double)cacheCreationDate;
-(void)writeTo:(id)arg1 ;
-(void)setClientModelIds:(NSMutableArray *)arg1 ;
-(unsigned long long)clientModelIdsCount;
-(void)clearClientModelIds;
-(void)addClientModelIds:(id)arg1 ;
-(void)addClientModelCacheUpdateUUIDStrings:(id)arg1 ;
-(void)setConsumerSubTypeString:(NSString *)arg1 ;
-(id)clientModelIdsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)clientModelCacheUpdateUUIDStringsCount;
-(void)clearClientModelCacheUpdateUUIDStrings;
-(id)clientModelCacheUpdateUUIDStringsAtIndex:(unsigned long long)arg1 ;
-(void)setHomeScreenCachedSuggestion:(ATXPBHomeScreenCachedSuggestion *)arg1 ;
-(void)setSuggestionLayout:(ATXPBSuggestionLayout *)arg1 ;
-(BOOL)hasConsumerSubTypeString;
-(BOOL)hasHomeScreenCachedSuggestion;
-(BOOL)hasSuggestionLayout;
-(void)setCacheCreationDate:(double)arg1 ;
-(void)setHasCacheCreationDate:(BOOL)arg1 ;
-(BOOL)hasCacheCreationDate;
-(NSString *)consumerSubTypeString;
-(NSMutableArray *)clientModelCacheUpdateUUIDStrings;
-(void)setClientModelCacheUpdateUUIDStrings:(NSMutableArray *)arg1 ;
-(ATXPBHomeScreenCachedSuggestion *)homeScreenCachedSuggestion;
-(ATXPBSuggestionLayout *)suggestionLayout;
@end
