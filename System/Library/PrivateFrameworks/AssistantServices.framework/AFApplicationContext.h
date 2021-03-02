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

@class NSString, AFBulletin, AceObject, NSDictionary;

@interface AFApplicationContext : NSObject <NSCopying, NSSecureCoding> {

	NSString* _associatedBundleIdentifier;
	AFBulletin* _bulletin;
	AceObject* _aceContext;
	NSDictionary* _contextDictionary;

}

@property (nonatomic,copy,readonly) NSString * associatedBundleIdentifier;              //@synthesize associatedBundleIdentifier=_associatedBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) AFBulletin * bulletin;                              //@synthesize bulletin=_bulletin - In the implementation block
@property (nonatomic,copy,readonly) AceObject * aceContext;                             //@synthesize aceContext=_aceContext - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * contextDictionary;                   //@synthesize contextDictionary=_contextDictionary - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(AceObject *)aceContext;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)contextDictionary;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(id)description;
-(id)initWithAssociatedBundleIdentifier:(id)arg1 bulletin:(id)arg2 aceContext:(id)arg3 contextDictionary:(id)arg4 ;
-(AFBulletin *)bulletin;
-(BOOL)isEqual:(id)arg1 ;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(NSString *)associatedBundleIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
@end
