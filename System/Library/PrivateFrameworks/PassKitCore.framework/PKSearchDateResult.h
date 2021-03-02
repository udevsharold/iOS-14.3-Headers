/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKSearchAutocompleteToken.h>

@class NSDate, NSString;

@interface PKSearchDateResult : NSObject <PKSearchAutocompleteToken> {

	unsigned long long _type;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (assign,nonatomic) unsigned long long type;               //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSDate * startDate;                      //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy) NSDate * endDate;                        //@synthesize endDate=_endDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSDate *)endDate;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)tokenType;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)type;
-(NSDate *)startDate;
-(BOOL)isEqual:(id)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
