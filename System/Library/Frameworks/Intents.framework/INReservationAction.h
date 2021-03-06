/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class INDateComponentsRange, NSUserActivity, NSString;

@interface INReservationAction : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {

	long long _type;
	INDateComponentsRange* _validDuration;
	NSUserActivity* _userActivity;

}

@property (nonatomic,readonly) long long type;                                          //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) INDateComponentsRange * validDuration;              //@synthesize validDuration=_validDuration - In the implementation block
@property (nonatomic,copy,readonly) NSUserActivity * userActivity;                      //@synthesize userActivity=_userActivity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(INDateComponentsRange *)validDuration;
-(id)initWithType:(long long)arg1 validDuration:(id)arg2 userActivity:(id)arg3 ;
-(unsigned long long)hash;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(long long)type;
-(BOOL)isEqual:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(NSUserActivity *)userActivity;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

