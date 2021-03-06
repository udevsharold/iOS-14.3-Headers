/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface HKAxisLabel : NSObject {

	NSString* _text;
	id _location;
	long long _labelType;

}

@property (nonatomic,retain) NSString * text;                  //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) id location;                      //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) long long labelType;              //@synthesize labelType=_labelType - In the implementation block
-(long long)labelType;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setLabelType:(long long)arg1 ;
-(id)location;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setLocation:(id)arg1 ;
@end

