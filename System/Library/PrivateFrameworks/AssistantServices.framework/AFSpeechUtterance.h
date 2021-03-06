/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface AFSpeechUtterance : NSObject <NSSecureCoding> {

	NSArray* _interpretationIndices;
	long long _confidenceScore;
	long long _source;

}

@property (nonatomic,copy) NSArray * interpretationIndices;              //@synthesize interpretationIndices=_interpretationIndices - In the implementation block
@property (assign,nonatomic) long long confidenceScore;                  //@synthesize confidenceScore=_confidenceScore - In the implementation block
@property (assign,nonatomic) long long source;                           //@synthesize source=_source - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)interpretationIndices;
-(void)setConfidenceScore:(long long)arg1 ;
-(id)initWithInterpretationIndices:(id)arg1 confidenceScore:(long long)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setInterpretationIndices:(NSArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(long long)source;
-(long long)confidenceScore;
-(void)setSource:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

