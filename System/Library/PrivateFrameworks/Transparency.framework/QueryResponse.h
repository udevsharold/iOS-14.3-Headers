/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Transparency/GPBMessage.h>

@class NSDictionary, InclusionProof, NSMutableArray, VRFWitness, NSData;

@interface QueryResponse : GPBMessage

@property (readonly) NSDictionary * metadata; 
@property (assign,nonatomic) int status; 
@property (nonatomic,retain) InclusionProof * inclusionProof; 
@property (assign,nonatomic) BOOL hasInclusionProof; 
@property (nonatomic,retain) NSMutableArray * pendingSmtsArray; 
@property (nonatomic,readonly) unsigned long long pendingSmtsArray_Count; 
@property (nonatomic,retain) VRFWitness * uriWitness; 
@property (assign,nonatomic) BOOL hasUriWitness; 
@property (nonatomic,copy) NSData * accountId; 
@property (nonatomic,retain) NSMutableArray * deviceWitnessesArray; 
@property (nonatomic,readonly) unsigned long long deviceWitnessesArray_Count; 
+(id)descriptor;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)metadata;
-(void)setMetadataValue:(id)arg1 key:(id)arg2 ;
@end

