/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, NSString, NSNumber;

@interface HDConceptIndexEntry : NSObject {

	NSUUID* _sampleUUID;
	long long _conceptIdentifier;
	long long _conceptVersion;
	NSString* _keyPath;
	unsigned long long _compoundIndex;
	unsigned long long _type;
	NSNumber* _ontologyVersion;

}

@property (nonatomic,copy,readonly) NSUUID * sampleUUID;                      //@synthesize sampleUUID=_sampleUUID - In the implementation block
@property (nonatomic,readonly) long long conceptIdentifier;                   //@synthesize conceptIdentifier=_conceptIdentifier - In the implementation block
@property (nonatomic,readonly) long long conceptVersion;                      //@synthesize conceptVersion=_conceptVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * keyPath;                       //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,readonly) unsigned long long compoundIndex;              //@synthesize compoundIndex=_compoundIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                       //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * ontologyVersion;               //@synthesize ontologyVersion=_ontologyVersion - In the implementation block
-(NSString *)keyPath;
-(id)init;
-(unsigned long long)compoundIndex;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)type;
-(BOOL)isEqual:(id)arg1 ;
-(NSUUID *)sampleUUID;
-(long long)conceptIdentifier;
-(long long)conceptVersion;
-(NSNumber *)ontologyVersion;
-(id)initWithSampleUUID:(id)arg1 conceptIdentifier:(long long)arg2 conceptVersion:(long long)arg3 keyPath:(id)arg4 compoundIndex:(unsigned long long)arg5 type:(unsigned long long)arg6 ontologyVersion:(id)arg7 ;
@end

