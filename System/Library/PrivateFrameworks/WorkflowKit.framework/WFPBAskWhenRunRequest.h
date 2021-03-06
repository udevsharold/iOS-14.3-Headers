/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSMutableArray;

@interface WFPBAskWhenRunRequest : PBRequest <NSCopying> {

	NSString* _actionIdentifier;
	NSData* _actionSerializedParameters;
	NSString* _associatedRunRequestIdentifier;
	NSMutableArray* _parameterKeys;
	NSMutableArray* _parameterKeysAndStates;
	NSMutableArray* _possibleStates;

}

@property (nonatomic,retain) NSString * associatedRunRequestIdentifier;              //@synthesize associatedRunRequestIdentifier=_associatedRunRequestIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * parameterKeys;                         //@synthesize parameterKeys=_parameterKeys - In the implementation block
@property (nonatomic,retain) NSMutableArray * parameterKeysAndStates;                //@synthesize parameterKeysAndStates=_parameterKeysAndStates - In the implementation block
@property (nonatomic,retain) NSString * actionIdentifier;                            //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasActionSerializedParameters; 
@property (nonatomic,retain) NSData * actionSerializedParameters;                    //@synthesize actionSerializedParameters=_actionSerializedParameters - In the implementation block
@property (nonatomic,retain) NSMutableArray * possibleStates;                        //@synthesize possibleStates=_possibleStates - In the implementation block
+(Class)parameterKeysType;
+(Class)parameterKeysAndStatesType;
+(Class)possibleStatesType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setActionIdentifier:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(NSMutableArray *)parameterKeys;
-(void)setParameterKeys:(NSMutableArray *)arg1 ;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)possibleStates;
-(NSString *)actionIdentifier;
-(void)writeTo:(id)arg1 ;
-(NSString *)associatedRunRequestIdentifier;
-(NSMutableArray *)parameterKeysAndStates;
-(NSData *)actionSerializedParameters;
-(void)clearPossibleStates;
-(void)setPossibleStates:(NSMutableArray *)arg1 ;
-(void)clearParameterKeys;
-(void)addParameterKeys:(id)arg1 ;
-(unsigned long long)parameterKeysCount;
-(id)parameterKeysAtIndex:(unsigned long long)arg1 ;
-(void)clearParameterKeysAndStates;
-(void)addParameterKeysAndStates:(id)arg1 ;
-(unsigned long long)parameterKeysAndStatesCount;
-(id)parameterKeysAndStatesAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasActionSerializedParameters;
-(void)addPossibleStates:(id)arg1 ;
-(unsigned long long)possibleStatesCount;
-(id)possibleStatesAtIndex:(unsigned long long)arg1 ;
-(void)setAssociatedRunRequestIdentifier:(NSString *)arg1 ;
-(void)setParameterKeysAndStates:(NSMutableArray *)arg1 ;
-(void)setActionSerializedParameters:(NSData *)arg1 ;
@end

