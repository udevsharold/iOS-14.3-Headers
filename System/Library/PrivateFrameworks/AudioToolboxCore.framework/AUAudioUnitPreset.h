/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AUAudioUnitPreset : NSObject <NSSecureCoding> {

	long long _number;
	NSString* _name;

}

@property (assign,nonatomic) long long number;              //@synthesize number=_number - In the implementation block
@property (nonatomic,copy) NSString * name;                 //@synthesize name=_name - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setName:(NSString *)arg1 ;
-(void)setNumber:(long long)arg1 ;
-(long long)number;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
@end
