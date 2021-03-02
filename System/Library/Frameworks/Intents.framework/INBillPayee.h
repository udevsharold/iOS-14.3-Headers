/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class INSpeakableString, NSString;

@interface INBillPayee : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {

	INSpeakableString* _nickname;
	NSString* _accountNumber;
	INSpeakableString* _organizationName;

}

@property (nonatomic,copy,readonly) INSpeakableString * nickname;                      //@synthesize nickname=_nickname - In the implementation block
@property (nonatomic,copy,readonly) NSString * accountNumber;                          //@synthesize accountNumber=_accountNumber - In the implementation block
@property (nonatomic,copy,readonly) INSpeakableString * organizationName;              //@synthesize organizationName=_organizationName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2 ;
-(id)initWithNickname:(id)arg1 number:(id)arg2 organizationName:(id)arg3 ;
-(unsigned long long)hash;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(INSpeakableString *)organizationName;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(INSpeakableString *)nickname;
-(NSString *)accountNumber;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
