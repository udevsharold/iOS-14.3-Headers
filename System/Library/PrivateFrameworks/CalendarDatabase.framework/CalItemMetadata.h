/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface CalItemMetadata : NSObject <NSSecureCoding> {

	NSDictionary* _x_props;
	int _classification;

}

@property (retain) NSDictionary * x_props;              //@synthesize x_props=_x_props - In the implementation block
@property (assign) int classification;                  //@synthesize classification=_classification - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)metadataWithICSComponent:(id)arg1 ;
+(id)_whitelistedClassesForSecureCoding;
+(id)metadataWithData:(id)arg1 ;
-(id)init;
-(void)setClassification:(int)arg1 ;
-(NSDictionary *)x_props;
-(id)initWithCoder:(id)arg1 ;
-(id)dataRepresentationWithExistingMetaData:(id)arg1 ;
-(void)applyToComponent:(id)arg1 ;
-(void)setX_props:(NSDictionary *)arg1 ;
-(id)initWithICSComponent:(id)arg1 ;
-(int)classification;
-(void)encodeWithCoder:(id)arg1 ;
@end
