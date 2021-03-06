/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdCore/AdCore-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, ADUserTargetingProperties;

@interface ADSponsoredSearchRequest : PBRequest <NSCopying> {

	NSString* _deploymentID;
	NSString* _experimentID;
	ADUserTargetingProperties* _properties;
	int _supportedODMLVersion;
	NSString* _treatmentID;
	BOOL _clientExclusive;
	BOOL _enableImagesForDupes;
	BOOL _inAllocation;
	BOOL _isBaseline;
	BOOL _isTest;
	SCD_Struct_AD11 _has;

}

@property (nonatomic,readonly) BOOL hasProperties; 
@property (nonatomic,retain) ADUserTargetingProperties * properties;              //@synthesize properties=_properties - In the implementation block
@property (assign,nonatomic) BOOL hasIsTest; 
@property (assign,nonatomic) BOOL isTest;                                         //@synthesize isTest=_isTest - In the implementation block
@property (assign,nonatomic) BOOL hasIsBaseline; 
@property (assign,nonatomic) BOOL isBaseline;                                     //@synthesize isBaseline=_isBaseline - In the implementation block
@property (assign,nonatomic) BOOL hasEnableImagesForDupes; 
@property (assign,nonatomic) BOOL enableImagesForDupes;                           //@synthesize enableImagesForDupes=_enableImagesForDupes - In the implementation block
@property (assign,nonatomic) BOOL hasSupportedODMLVersion; 
@property (assign,nonatomic) int supportedODMLVersion;                            //@synthesize supportedODMLVersion=_supportedODMLVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasExperimentID; 
@property (nonatomic,retain) NSString * experimentID;                             //@synthesize experimentID=_experimentID - In the implementation block
@property (nonatomic,readonly) BOOL hasTreatmentID; 
@property (nonatomic,retain) NSString * treatmentID;                              //@synthesize treatmentID=_treatmentID - In the implementation block
@property (nonatomic,readonly) BOOL hasDeploymentID; 
@property (nonatomic,retain) NSString * deploymentID;                             //@synthesize deploymentID=_deploymentID - In the implementation block
@property (assign,nonatomic) BOOL hasInAllocation; 
@property (assign,nonatomic) BOOL inAllocation;                                   //@synthesize inAllocation=_inAllocation - In the implementation block
@property (assign,nonatomic) BOOL hasClientExclusive; 
@property (assign,nonatomic) BOOL clientExclusive;                                //@synthesize clientExclusive=_clientExclusive - In the implementation block
+(id)options;
-(BOOL)hasIsTest;
-(void)setIsTest:(BOOL)arg1 ;
-(BOOL)inAllocation;
-(void)setHasIsTest:(BOOL)arg1 ;
-(BOOL)isTest;
-(NSString *)experimentID;
-(BOOL)clientExclusive;
-(BOOL)hasSupportedODMLVersion;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasTreatmentID;
-(BOOL)hasExperimentID;
-(void)setTreatmentID:(NSString *)arg1 ;
-(void)setProperties:(ADUserTargetingProperties *)arg1 ;
-(BOOL)hasEnableImagesForDupes;
-(BOOL)readFrom:(id)arg1 ;
-(void)setInAllocation:(BOOL)arg1 ;
-(BOOL)hasDeploymentID;
-(BOOL)hasIsBaseline;
-(void)setDeploymentID:(NSString *)arg1 ;
-(unsigned long long)hash;
-(void)setClientExclusive:(BOOL)arg1 ;
-(NSString *)treatmentID;
-(int)supportedODMLVersion;
-(id)description;
-(ADUserTargetingProperties *)properties;
-(void)setHasSupportedODMLVersion:(BOOL)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setSupportedODMLVersion:(int)arg1 ;
-(void)setHasClientExclusive:(BOOL)arg1 ;
-(void)setExperimentID:(NSString *)arg1 ;
-(void)setIsBaseline:(BOOL)arg1 ;
-(BOOL)hasProperties;
-(NSString *)deploymentID;
-(BOOL)isBaseline;
-(void)setHasEnableImagesForDupes:(BOOL)arg1 ;
-(void)setHasIsBaseline:(BOOL)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)enableImagesForDupes;
-(void)setHasInAllocation:(BOOL)arg1 ;
-(BOOL)hasInAllocation;
-(BOOL)hasClientExclusive;
-(void)setEnableImagesForDupes:(BOOL)arg1 ;
@end

