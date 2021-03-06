/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Transparency/GPBMessage.h>
#import <Transparency/TransparencyVerifiable.h>

@class TransparencyMapEntryVerifier, TransparencyManagedDataStore, NSDictionary, SignedMapHead, NSMutableArray, NSData;

@interface MapEntry : GPBMessage <TransparencyVerifiable>

@property (retain) TransparencyMapEntryVerifier * verifier; 
@property (retain) TransparencyManagedDataStore * dataStore; 
@property (readonly) NSDictionary * metadata; 
@property (nonatomic,retain) SignedMapHead * smh; 
@property (assign,nonatomic) BOOL hasSmh; 
@property (nonatomic,retain) NSMutableArray * hashesOfPeersInPathToRootArray; 
@property (nonatomic,readonly) unsigned long long hashesOfPeersInPathToRootArray_Count; 
@property (nonatomic,copy) NSData * mapLeaf; 
+(id)descriptor;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(TransparencyManagedDataStore *)dataStore;
-(NSDictionary *)metadata;
-(void)setDataStore:(TransparencyManagedDataStore *)arg1 ;
-(unsigned long long)verifyWithError:(id*)arg1 ;
-(TransparencyMapEntryVerifier *)verifier;
-(void)setVerifier:(TransparencyMapEntryVerifier *)arg1 ;
-(void)setMetadataValue:(id)arg1 key:(id)arg2 ;
@end

