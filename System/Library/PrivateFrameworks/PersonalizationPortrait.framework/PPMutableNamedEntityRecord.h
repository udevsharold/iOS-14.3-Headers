/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <PersonalizationPortrait/PPNamedEntityRecord.h>

@class PPNamedEntity, PPSource, NSString, PPNamedEntityMetadata;

@interface PPMutableNamedEntityRecord : PPNamedEntityRecord

@property (nonatomic,retain) PPNamedEntity * entity; 
@property (nonatomic,retain) PPSource * source; 
@property (assign,nonatomic) unsigned long long algorithm; 
@property (assign,nonatomic) double initialScore; 
@property (assign,nonatomic) double decayRate; 
@property (nonatomic,retain) NSString * extractionOsBuild; 
@property (assign,nonatomic) unsigned char changeType; 
@property (assign,nonatomic) unsigned extractionAssetVersion; 
@property (assign,nonatomic) double sentimentScore; 
@property (nonatomic,retain) PPNamedEntityMetadata * metadata; 
-(void)setMetadata:(PPNamedEntityMetadata *)arg1 ;
-(void)setChangeType:(unsigned char)arg1 ;
-(void)setDecayRate:(double)arg1 ;
-(void)setEntity:(PPNamedEntity *)arg1 ;
-(void)setSentimentScore:(double)arg1 ;
-(void)setAlgorithm:(unsigned long long)arg1 ;
-(id)init;
-(void)setExtractionAssetVersion:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSource:(PPSource *)arg1 ;
-(void)setExtractionOsBuild:(NSString *)arg1 ;
-(void)setInitialScore:(double)arg1 ;
@end

