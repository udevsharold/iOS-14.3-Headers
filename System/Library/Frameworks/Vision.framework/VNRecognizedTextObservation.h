/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNRectangleObservation.h>

@class NSArray, NSString;

@interface VNRecognizedTextObservation : VNRectangleObservation {

	BOOL _isTitle;
	NSArray* _textObjects;
	NSString* _text;

}

@property (nonatomic,copy) NSArray * textObjects;                 //@synthesize textObjects=_textObjects - In the implementation block
@property (assign,nonatomic) BOOL isTitle;                        //@synthesize isTitle=_isTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * text;              //@synthesize text=_text - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)topCandidates:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isTitle;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)textObjects;
-(void)setTextObjects:(NSArray *)arg1 ;
-(void)setIsTitle:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
