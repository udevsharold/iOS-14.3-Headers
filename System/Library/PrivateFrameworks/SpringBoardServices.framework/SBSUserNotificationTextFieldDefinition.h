/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardServices/SpringBoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString;

@interface SBSUserNotificationTextFieldDefinition : NSObject <NSCopying, NSMutableCopying> {

	NSString* _title;
	NSString* _value;
	BOOL _isSecure;
	BOOL _hasSetMaxLength;
	unsigned long long _maxLength;
	long long _keyboardType;
	long long _autocorrectionType;
	long long _autocapitalizationType;

}

@property (nonatomic,readonly) BOOL _hasSetMaxLength;                         //@synthesize hasSetMaxLength=_hasSetMaxLength - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * value;                         //@synthesize value=_value - In the implementation block
@property (getter=isSecure,nonatomic,readonly) BOOL secure;                   //@synthesize isSecure=_isSecure - In the implementation block
@property (nonatomic,readonly) unsigned long long maxLength;                  //@synthesize maxLength=_maxLength - In the implementation block
@property (nonatomic,readonly) long long keyboardType;                        //@synthesize keyboardType=_keyboardType - In the implementation block
@property (nonatomic,readonly) long long autocapitalizationType;              //@synthesize autocapitalizationType=_autocapitalizationType - In the implementation block
@property (nonatomic,readonly) long long autocorrectionType;                  //@synthesize autocorrectionType=_autocorrectionType - In the implementation block
+(id)_definitionsFromSerializedDefinitions:(id)arg1 ;
-(BOOL)isSecure;
-(long long)autocapitalizationType;
-(NSString *)value;
-(id)build;
-(long long)autocorrectionType;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)keyboardType;
-(unsigned long long)maxLength;
-(unsigned long long)hash;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)_copyPropertiesToDefinition:(id)arg1 ;
-(BOOL)_hasSetMaxLength;
-(BOOL)isEqual:(id)arg1 ;
-(id)_initWithDictionary:(id)arg1 ;
-(NSString *)title;
@end

