/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface EMTToken : NSObject <NSCopying> {

	BOOL _precededBySpace;
	BOOL _followedBySpace;
	float _confidence;
	NSString* _text;

}

@property (nonatomic,readonly) NSString * text;                   //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) float confidence;                  //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) BOOL precededBySpace;              //@synthesize precededBySpace=_precededBySpace - In the implementation block
@property (nonatomic,readonly) BOOL followedBySpace;              //@synthesize followedBySpace=_followedBySpace - In the implementation block
-(float)confidence;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)text;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)precededBySpace;
-(BOOL)followedBySpace;
-(id)initWithText:(id)arg1 confidence:(float)arg2 precededBySpace:(BOOL)arg3 followedBySpace:(BOOL)arg4 ;
@end
