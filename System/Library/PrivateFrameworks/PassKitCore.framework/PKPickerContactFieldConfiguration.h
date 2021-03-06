/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKContactFieldConfiguration.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface PKPickerContactFieldConfiguration : PKContactFieldConfiguration <NSSecureCoding> {

	NSArray* _pickerItems;

}

@property (nonatomic,readonly) NSArray * pickerItems;              //@synthesize pickerItems=_pickerItems - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(NSArray *)pickerItems;
-(id)initWithDictionary:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

