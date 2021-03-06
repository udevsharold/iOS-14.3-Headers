/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CNGeminiHandle : NSObject <NSSecureCoding> {

	long long _handleType;
	NSString* _stringValue;

}

@property (nonatomic,readonly) long long handleType;                     //@synthesize handleType=_handleType - In the implementation block
@property (nonatomic,copy,readonly) NSString * stringValue;              //@synthesize stringValue=_stringValue - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)stringValue;
-(id)initWithString:(id)arg1 type:(long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)handleType;
-(void)encodeWithCoder:(id)arg1 ;
@end

