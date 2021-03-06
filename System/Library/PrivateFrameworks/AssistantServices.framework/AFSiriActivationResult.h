/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/AFDictionaryConvertible.h>

@class NSError, NSString;

@interface AFSiriActivationResult : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible> {

	long long _actionType;
	NSError* _error;

}

@property (nonatomic,readonly) long long actionType;                //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,copy,readonly) NSError * error;                //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(NSError *)error;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(id)buildDictionaryRepresentation;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(long long)actionType;
-(id)initWithActionType:(long long)arg1 error:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

