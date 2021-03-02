/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ButtonResolver.framework/ButtonResolver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface BRAsset : NSObject {

	BOOL _hasAudio;
	BOOL _hasHaptic;
	BOOL _isNull;
	long long _type;
	NSDictionary* _parameters;

}

@property (nonatomic,readonly) long long type;                         //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasAudio;                            //@synthesize hasAudio=_hasAudio - In the implementation block
@property (assign,nonatomic) BOOL hasHaptic;                           //@synthesize hasHaptic=_hasHaptic - In the implementation block
@property (nonatomic,readonly) NSDictionary * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) BOOL isNull;                            //@synthesize isNull=_isNull - In the implementation block
@property (nonatomic,readonly) id propertyList; 
+(id)withType:(long long)arg1 andParameters:(id)arg2 ;
+(id)nullAsset;
-(NSDictionary *)parameters;
-(id)init;
-(void)dealloc;
-(BOOL)isNull;
-(id)description;
-(long long)type;
-(id)propertyList;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasAudio;
-(void)setHasAudio:(BOOL)arg1 ;
-(id)initWithType:(long long)arg1 andParameters:(id)arg2 null:(BOOL)arg3 ;
-(BOOL)hasHaptic;
-(void)setHasHaptic:(BOOL)arg1 ;
@end
