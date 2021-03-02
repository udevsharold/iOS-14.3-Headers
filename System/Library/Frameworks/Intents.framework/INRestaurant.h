/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INRestaurantExport.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CLLocation, NSString;

@interface INRestaurant : NSObject <INRestaurantExport, NSSecureCoding, NSCopying> {

	CLLocation* _location;
	NSString* _name;
	NSString* _vendorIdentifier;
	NSString* _restaurantIdentifier;

}

@property (nonatomic,copy) CLLocation * location;                        //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * vendorIdentifier;                  //@synthesize vendorIdentifier=_vendorIdentifier - In the implementation block
@property (nonatomic,copy) NSString * restaurantIdentifier;              //@synthesize restaurantIdentifier=_restaurantIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)setName:(NSString *)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)restaurantIdentifier;
-(void)setRestaurantIdentifier:(NSString *)arg1 ;
-(id)initWithLocation:(id)arg1 name:(id)arg2 vendorIdentifier:(id)arg3 restaurantIdentifier:(id)arg4 ;
-(BOOL)location:(id)arg1 equalToLocation:(id)arg2 ;
-(CLLocation *)location;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
-(id)_dictionaryRepresentation;
-(NSString *)name;
-(void)setVendorIdentifier:(NSString *)arg1 ;
-(NSString *)vendorIdentifier;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
