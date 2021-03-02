/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSDictionary;

@interface AMSBuyParams : NSObject <NSCopying, NSSecureCoding> {

	NSMutableDictionary* _backingDictionary;

}

@property (nonatomic,readonly) double price; 
@property (readonly) NSDictionary * dictionary; 
+(BOOL)supportsSecureCoding;
+(id)buyParamsWithString:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(void)clear;
-(double)price;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(id)stringValue;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)_parseBuyParams:(id)arg1 ;
-(id)_normalizedDictionary;
-(id)buyParametersForRequest;
-(void)importURLEncodedBuyParams:(id)arg1 ;
-(id)requestDataWithError:(id*)arg1 ;
-(id)propertyForKey:(id)arg1 ;
-(NSDictionary *)dictionary;
-(void)encodeWithCoder:(id)arg1 ;
@end
