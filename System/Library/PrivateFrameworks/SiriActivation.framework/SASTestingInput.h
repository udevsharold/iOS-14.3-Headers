/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriActivation/SiriActivation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL;

@interface SASTestingInput : NSObject <NSCopying, NSSecureCoding> {

	long long _type;
	NSString* _text;
	NSURL* _recordedSpeechURL;

}

@property (assign,nonatomic) long long type;                       //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * text;                        //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSURL * recordedSpeechURL;              //@synthesize recordedSpeechURL=_recordedSpeechURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)text;
-(void)setType:(long long)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setRecordedSpeechURL:(NSURL *)arg1 ;
-(NSURL *)recordedSpeechURL;
@end
