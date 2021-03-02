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

@class NSString, NSArray;

@interface INGeographicalFeature : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {

	NSString* _geographicalFeatureType;
	NSArray* _geographicalFeatureDescriptors;

}

@property (nonatomic,copy,readonly) NSString * geographicalFeatureType;                    //@synthesize geographicalFeatureType=_geographicalFeatureType - In the implementation block
@property (nonatomic,copy,readonly) NSArray * geographicalFeatureDescriptors;              //@synthesize geographicalFeatureDescriptors=_geographicalFeatureDescriptors - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(id)initWithGeographicalFeatureType:(id)arg1 geographicalFeatureDescriptors:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)geographicalFeatureDescriptors;
-(NSString *)geographicalFeatureType;
-(unsigned long long)hash;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
